#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N];
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        //cout<<"value of b is "<<b<<endl;
        a[b]=1;
        //cout<<a[b]<<endl;
    }
    int count=0;
    

    int ans=0;
    for(int i=1;i<=m;i++)
    {
        count=count+a[i];
       // cout<<count<<" "<<i<<" "<<k<<endl;
        if(count==k)
        {
            a[i]=0;
            count--;
            ans++;
        }
    }
    int j=m;
    int i=1;
    while(j<1e6+1)
    {
        count=count-a[i];
        i++;
        j++;
        count=count+a[j];
        if(count==k)
        {
            count=count-a[j];
            a[j]=0;
            ans++;
        }

    }
    cout<<ans<<endl;
}