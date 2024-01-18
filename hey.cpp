#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]%k==0)
        {
            j=j+1;
        }
    }
    cout<<j;
    return 0;
}
