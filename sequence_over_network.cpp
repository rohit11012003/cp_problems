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
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
       vector<bool> dp(n+1,false);
       dp[0]=true;
        for(int i=1;i<=n;i++)
        {
            if(i+a[i]<=n &&dp[i-1]==true)
            {
                dp[i+a[i]]=true;
            }
            if(i-a[i]-1>=0 &&dp[i-a[i]-1]==true)
            {
                dp[i]=true;
            }
        }
        if(dp[n]==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}