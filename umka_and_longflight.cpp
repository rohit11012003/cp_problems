#include<bits/stdc++.h>
using namespace std;
const int N=50;
int Fib[N];
void build()
{
    Fib[0]=1;
    Fib[1]=1;
    for(int i=2;i<=50;i++)
    {
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    //cout<<Fib[5]<<endl;
}
bool fun(int n , int x, int y)
{
    if(n==1)
    {
        return true;
    }
    if(y<1+Fib[n]&&y>=Fib[n-1]+1)
    {
        return false;
    }
    if(y>=1+Fib[n])
    {
        y-=Fib[n];
    }
     return fun(n-1,y,x);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    build();
    
    int n,x,y;
    cin>>n>>x>>y;
    bool p=fun(n,x,y);
   // cout<<p<<endl;
    if(p==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}