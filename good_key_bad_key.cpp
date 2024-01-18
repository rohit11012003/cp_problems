#include<bits/stdc++.h>
using namespace std;
int bin(int l ,int r, long long  a[], int k, int n)
{
    if(l==r)
    {
        return l;
    }
    int mid=(l+r)/2;
    long long int count1=a[mid]-k;
    int j=1;
    for(int i=mid+1;i<n;i++)
    {
        count1+=a[i]/pow(2,j);
        j++;
    }
    long long int count2=a[mid]+a[mid+1]-2*k;
    j=1;
    for(int i=mid+2;i<n;i++)
    {
        count2+=a[i]/pow(2,j);
        j++;
    }
    if(count2<count1)
    {
       return  bin(l,mid,a,k,n);
    }
    else{
        return bin(mid+1,r,a,k,n);
    }




}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       // int p=bin(0,n-1,a,k,n);
       long long int ans=0;
       long long int z=0;
       int j=1;
       for(int i=0;i<min(n,35);i++)
       {
        z+=a[i]/pow(2,j);
        j++;
       }
       if(z>ans)
       {
        ans=z;
       }
       long long int sum=0;
       z=0;
        for(int i=0;i<n;i++)
        {
             sum+=a[i]-k;
             z=sum;
            int k=1;
            for(int j=i+1;j<min(n,i+35);j++)
            {
                z+=a[j]/pow(2,k);
                k++;
            }
            if(z>ans)
            {
                ans=z;
            }
        }
        cout<<ans<<endl;
       

    }
}