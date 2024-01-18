#include<bits/stdc++.h>
using namespace std;
int fun(int l, int r, int a[], int s, int n)
{
    if(l==r)
    {
        return l;
    }
    int mid=(l+r)/2;
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]+(i+1)*(mid+1);
    }
    sort(b,b+n);
    int sum=0;
    for(int i=0;i<=mid;i++)
    {
        sum=sum+b[i];
    }
    if(sum>s)
    {
        return fun(l,mid,a,s,n);
    }
    else{
        return fun(mid+1,r,a,s,n);
    }

}
int main()
{

        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k=fun(0,n+1,a,s,n);
        int sum=0;
        int b[n];
        for(int i=0;i<n;i++)
        {
            b[i]=a[i]+(i+1)*(k+1);
        }
        sort(b,b+n);
        int ans=0;
        for(int i=0;i<=k;i++)
        {
            ans=ans+b[i];
        }
        cout<<k+1<<" "<<ans<<endl;
    }
