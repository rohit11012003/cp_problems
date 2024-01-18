#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
      //  cout<<count<<endl;
        int n=s.size();
        int a[n];
        int z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                z++;
                a[i]=z;
            }
            else{
                a[i]=z;
            }
        }
        if(count==0||count==1)
        {
            cout<<0<<endl;
        }
        else{
            int ans=INT_MAX;
            int j=count-1;
            for(int i=0;j<n;i++)
            {
                if(i==0)
                {
                    ans=min(ans,a[j]);
                }
                else{
                    ans=min(ans,a[j]-a[i-1]);
                }
                j++;
            }
            cout<<ans<<endl;
        }
    }

}