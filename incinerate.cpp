#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int, int >> v;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        stack<int> s1;
        stack<int> s;
        for(int i=n-1;i>=0;i--)
        {
            s.push(v[i].first);
        }
       // cout<<"hello1"<<endl;
       int ans[n];
       for(int i=n-1;i>=0;i--)
       {
        if(i==n-1)
        {
            ans[i]=v[i].second;
        }
        else{
            ans[i]=min(ans[i+1],v[i].second);
        }
       }       
       //cout<<"hello2"<<endl;
       // cout<<"hello"<<endl;
        int z=k;
        int j=0;
        while(k>0&&j<=n-1)
        {
           while(s.top()<=z&&s.size()!=0)
           {
            s.pop();
            j++;
            if(s.size()==0)
           {
            break;
           }
           }
           if(s.size()==0)
           {
            break;
           }
          k=k-ans[j];
          
          z=z+k;
          cout<<z<<" "<<k<<" "<<j<<endl;
        }
        if(s.size()==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}