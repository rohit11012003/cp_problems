#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int z=-1;
        for(int i=0;i<n;i++)
        {
            if(i==a[i])
            {
                z=i;
                break;
            }
            if(a[i]-2>0&&a[i]-2==i)
            {
                z=i;
                break;
            }
        }
        
    }
}