#include <iostream>
#include <vector>

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Helper function to maintain the max-heap property
    void heapify(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }

        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapify(largest);
        }
    }

public:
    // Default constructor
    MaxHeap() {}

    // Constructor to build a max heap from a given vector
    MaxHeap(vector<int>& v) {
        heap = v;
        for (int i = (heap.size() / 2) - 1; i >= 0; i--) {
            heapify(i);
        }
    }

    // Insert an element into the heap
    void insert(int x) {
        heap.push_back(x);
        int i = heap.size() - 1;
        while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    // Remove the maximum element from the heap
    int removeMax() {
        int max = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(0);
        return max;
    }

    // Get the maximum element in the heap
    int getMax() {
        return heap[0];
    }

    // Check if the heap is empty
    bool isEmpty() {
        return heap.empty();
    }

    // Get the size of the heap
    int size() {
        return heap.size();
    }
};

int main() {
    vector<int> v = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    MaxHeap heap(v);

    cout << "Size of heap: " << heap.size() << endl;
    cout << "Maximum element: " << heap.getMax() << endl;
    cout << "Removing maximum element..." << endl;
    heap.removeMax();
    cout << "New maximum element: " << heap.getMax() << endl;

    heap.insert(11);
    cout << "New maximum element after inserting 11: " << heap.getMax() << endl;

    return 0;
}