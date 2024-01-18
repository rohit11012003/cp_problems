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
       // map<int , int> m;
       
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           // m[a[i]]=m[a[i]]+1;
           
        }
        vector<long long int > dp(n+1,0);
        map<long long int , long long int> m;
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i>0)
            {
                dp[i]=dp[i-1];
            }
            m[a[i]]=m[a[i]]+0;
            dp[i]+=m[a[i]];
            m[a[i]]+=(i+1);
            ans+=dp[i];
        }
        cout<<ans<<endl;

    }
}