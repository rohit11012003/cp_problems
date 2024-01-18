#include<bits/stdc++.h>
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int a[n];
        vector<int> v;
       MaxHeap heap(v);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        m--;
        long long int sum1=0;
        int count1=0;
        if(m!=0)
        {
            if(a[m]>0)
        {
            a[m]=-1*a[m];
            count1++;
            sum1=sum1+a[m];
        }
        else{
            sum1+=a[m];
        }
        for(int i=m-1;i>=0;i--)
        {
            if(a[i]<=0)
            {
                sum1+=a[i];
            }
            else{
                if(a[i]+sum1<=0)
                {
                    sum1+=a[i];
                    heap.insert(a[i]);
                }
                else{
                    sum1=sum1+a[i];
                    heap.insert(a[i]);
                    int p=heap.getMax();
                    heap.removeMax();
                    sum1=sum1-2*p;
                    count1++;

                }
            }
        }
        }
        if(m+1<=n-1)
        {
           // cout<<"value of count is "<<count1<<endl;
            //cout<<m+1<<" "<<a[m+1]<<endl;
            vector<int> v1;
            MaxHeap heap1(v1);
            long long int sum2=0;
            if(a[m+1]<0)
            {
                count1++;
                a[m+1]=-1*a[m+1];
                sum2+=a[m+1];
            }
            
            else{
                sum2+=a[m+1];
            }
          // cout<<sum2<<endl;
            for(int i=m+2;i<n;i++)
            {
                if(a[i]>=0)
                {
                 //   cout<<"no"<<endl;
                    sum2+=a[i];
                }
                else{
                    if(sum2+a[i]>=0)
                    {
                      //  cout<<"yes"<<endl;
                        sum2=sum2+a[i];
                        heap1.insert(abs(a[i]));
                    }
                    else{
                       // cout<<"yes1"<<endl;
                        sum2=sum2+a[i];
                        heap1.insert(abs(a[i]));
                       long long  int p=heap1.getMax();
                      // cout<<p<<" ";
                        heap1.removeMax();
                        sum2=sum2+2*p;
                       // cout<<sum2<<endl;
                        count1++;
                    }
                }
            }
        }
        cout<<count1<<endl;
    }
}