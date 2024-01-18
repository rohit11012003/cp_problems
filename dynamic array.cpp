#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void MinMax(int* A,int M,int N)
{
	int t;
	for (int i = 0; i < M; i++)
    {
    	if(i==M-1)
    	{
    		t=N-1;
		}
		else{
			t=N;
		}
       for(int j=0;j<t;j++)
       {
       	for(int h=i;h<M;h++)
       	{
       		for(int v=j+1;v<N;v++)
       		{
       			if(*(A + h*N + v)>*(A + i*N + j))
       			{
       				swap(*(A + h*N + v),*(A + i*N + j));
				   }
			   }
		   }
	   }
       
    }
    cout<<*(A)<<"  "<<*(A+N)<<endl;
}
 
// Dynamically allocate memory for 2D Array in C++
int main()
{
	int N,M;
	cin>>N>>M;
    // dynamically allocate memory of size `M × N`
    int* A = new int[M * N];
 
    // assign values to the allocated memory
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            *(A + i*N + j) = rand() % 100;
        }
    }
 
    // print the 2D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << *(A + i*N + j) << " ";    
        }
        cout << endl;
    }
    MinMax(A,M,N);
 
    // deallocate memory
    delete[] A;
 
    return 0;
}
