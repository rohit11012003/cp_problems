#include<bits/stdc++.h>
using namespace std;
const int N=105;
 //vector<int> v(0,105);
 long long  fun(int i, int n,vector<long long int > &dp,vector<int> &v)
 {
  //  cout<<i<<" ";
    if(i==n)
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    else{
        if(v[i]==0)
        {
            return INT_MAX;
        }
        else{
            long long int p=INT_MAX;
            for(int j=i+1;j<=i+v[i];j++)
            {
                p= min(p,1+fun(j,n,dp,v));
            }
            return dp[i]=p;
        }
        
    }
 }
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       
        string s;
        cin>>s;
        int n;
        cin>>n;
        vector<string> v[105];
        vector<string> v1;
        map<string , int> m;
       for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            v1.push_back(s1);
            m[s1]=i+1;

        }
  //      cout<<"yes1"<<endl;
       // vector<long long int > dp(105,-1);
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<v1.size();j++)
            {
                int p=i;
                string s1=v1[j];
                int z=0;
                if(s.size()-i>=s1.size())
                {
                    for(int k=0;k<s1.size();k++)
                    {
                        if(s1[k]!=s[i])
                        {
                            z=1;
                            break;
                        }
                        else{
                            i++;
                        }
                    }
                }
                else{
                    z=1;
                }
                if(z==0)
                {
                 //   cout<<p<<" "<<j<<endl;
                   v[p].push_back(s1);
                }
                i=p;
            }
        }
    //    cout<<"yes"<<endl;
       if(v[0].size()==0)
       {
        cout<<-1<<endl;
       }
       else{
        int count=0;
        string s1;
        int si=0;
        for(int i=0;i<v[0].size();i++)
        {
            if(v[0][i].size()>si)
            {
                si=v[0][i].size();
                s1=v[0][i];
            }
        }
        count++;
        vector<pair<int, int>> ans;
        int z=0;
        ans.push_back({m[s1],1});
        int i=1;
        int j=s1.size();
        int ma=j;
        int ind=i;
        //cout<<j<<" "<<s.size()<<endl;
        while(j!=s.size())
        {
            int p=i;
            while(p<=j)
            {
                if(v[p].size()!=0)
                {
                    for(int k=0;k<v[p].size();k++)
                    {
                        if(p+v[p][k].size()>ma)
                        {
                            ma=p+v[p][k].size();
                            s1=v[p][k];
                            ind=p;
                        }
                    }
                }
                p++;
            }
          //  cout<<"value of ma is "<<ma<<" "<<j<<endl;
            if(ma==j)
            {
                z=1;
                break;
            }
            else{
                i=j+1;
                j=ma;
                count++;
                ans.push_back({m[s1],ind+1});
                
            }
        }
        if(z==1)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<count<<endl;
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
       }
      


}
}