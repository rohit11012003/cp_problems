#include<iostream>
using namespace std;
int power(int n, int A[])
{
   return n;
   

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int A[n];
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
           
        }
        cout<< power(n,A);

    }
}
