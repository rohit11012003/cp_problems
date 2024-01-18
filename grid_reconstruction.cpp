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
        int a[2][n];
        int p=2*n;
        int q=1;
        a[0][0]=p-1;
        a[1][n-1]=p;
        p=2*n-3;
        for(int i=1;i<n;i++)
        {
            if(i%2==0)
            {
                a[0][i]=p;
                p=p-2;
            }
            else{
                a[0][i]=q;
                q=q+2;
            }
        }
        p=2*n-2;
        q=2;
        for(int i=0;i<n-1;i++)
        {
             if(i%2!=0)
            {
                a[1][i]=p;
                p=p-2;
            }
            else{
                a[1][i]=q;
                q=q+2;
            }
        }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}