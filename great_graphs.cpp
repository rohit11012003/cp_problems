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
        long long int sum=0;
        vector<long long int > v;
        for(int i=1;i<n;i++)
        {
           long long int z=a[i]-sum;
           v.push_back(z);
           sum=sum+z;
        }
        if(n==2)
        {
            cout<<0<<endl;
        }
        else{

        
        long long int count1=0;
        long long int count2=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=0)
            {
                count1+=v[i];
            }
            else{
                count2+=v[i];
            }
        }
        long long int ans=count1+count2;
        ans=0-ans;
        ans+=count2;
        cout<<ans<<endl;
        }
    }
}