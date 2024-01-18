#include<iostream>
using namespace std;
void init(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=-1;
    }
}
int fib(int n,int lookup[])
{
    if(lookup[n]==-1)
    {
        if(n<=1)
        {
            lookup[n]=n;
        }
        else {
            lookup[n]=fib(n-1,lookup)+fib(n-2,lookup);
        }}
        else{
            return lookup[n];
        }

    
}



int main()
{
    int n;
    cin>>n;
    int lookup[n];
    init(lookup,n);
   int z= lookup[n]=fib(n-1,lookup)+fib(n-2,lookup);
   cout<<z<<endl;
    return 0;


}