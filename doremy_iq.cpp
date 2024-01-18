#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n];
        int Q=0;
        for(int i=n-1;i>=0;i--)
        {
            if(Q>=a[i])
            {
                b[i]=1;
            }
            else{
                if(Q<q)
                {
                    b[i]=1;
                    Q++;
                }
                else {
                    b[i]=0;
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            cout<<b[j];
        }
        cout<<endl;
    }
}
