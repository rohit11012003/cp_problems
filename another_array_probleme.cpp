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
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<endl;
        }
        else if(n==2)
        {
            //cout<<"yes"<<endl;
            cout<<max(a[0]+a[1],2*abs(a[0]-a[1]))<<endl;
        }
       else  if(n>=4)
        {
            sort(a,a+n);
            long long int z=a[n-1];
            cout<<n*z<<endl;
        }
        else{
            if(a[1]>a[0]&&a[1]>a[2])
            {
                //cout<<"yes"<<endl;
                vector<long long int> v;
                v.push_back(3*abs(a[1]-a[2]));
                v.push_back(3*a[0]);
                v.push_back(3*a[2]);
                v.push_back(2*abs(a[1]-a[0])+a[2]);
                v.push_back(2*abs(a[1]-a[2])+a[0]);
                v.push_back(a[0]+a[1]+a[2]);
                v.push_back(3*abs(a[0]-a[2]));
                v.push_back(3*abs(a[1]-a[0]));
                
                
                //cout<<endl;
                sort(v.begin(),v.end());
                
                //cout<<"after sort"<<endl;
                cout<<v[v.size()-1]<<endl;


            }
            else{
                sort(a,a+n,greater<int>());
                cout<<3*a[0]<<endl;
            }
        }
    }
}