#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[2]=-1*a[2];
    a[4]=-1*a[4];
    a[6]=-1*a[6];
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    long long int ans[n];
    long long int count=0;
    for(int i=0;i<n;i++)
    {
        count+=a[i];
        ans[i]=count;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}