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
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            if(a[0]==a[1])
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            int count=0;
            int prv=a[0];
            for(int i=1;i<n-1;i++)
            {
               if(a[i]==a[i+1])
               {
                count++;
                continue;
               }
               else  if(prv>=a[i]&&a[i]>=a[i+1])
                {
                  //  cout<<"yes"<<endl;
                    count++;
                    prv=a[i];
                }
                else if(prv<=a[i]&&a[i]<=a[i+1])
                {
                    count++;
                    prv=a[i];
                }
               
            }
        //    cout<<count<<endl;
            if(count==n-2)
            {
                if(a[0]==a[n-1])
                {
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
            }
            else{
                cout<<n-count<<endl;
            }
        }
        

    }
}