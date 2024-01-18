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
        long long  int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else{
            for(int i=1;i<n-1;i++)
            {
                if(a[i]<a[i-1])
                {
                  long long   int d=a[i-1]-a[i];
                    a[i]=a[i]+d;
                    a[i+1]+=d;
                }
            }
            if(a[n-1]>=a[n-2])
            {
                cout<<"YES"<<endl;
            }
            else{
                
                //cout<<endl;
                int d=a[n-2]-a[n-1];
                long long int count=0;
                for(int i=0;i<n-2;i++)
                {
                 //   cout<<i<<" "<<a[i]<<" "<<a[i+1]<<endl;
                    count+=a[i+1]-a[i];
                    i++;
                }
               // cout<<count<<" "<<d<<endl;
                if(count>=d)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}