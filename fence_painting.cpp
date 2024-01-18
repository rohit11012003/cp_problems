#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m1;
        cin>>n>>m1;
        int a[n],b[n];
        int c[m1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int, int> m;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]!=b[i])
            {
                m[b[i]]=m[b[i]]+1;
            }
        }
        int z=0;
        for(int j=0;j<m1;j++)
        {
            cin>>c[j];
            m[c[j]]=m[c[j]]-1;
        }
        for(auto it : m)
        {
            if(it.second>0)
            {
                z=1;
                break;
            }
        }
        if(z==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            map<int, int> m2;
            for(int i=0;i<n;i++)
            {
                m2[b[i]]=1;
            }
            if(m2[c[m1-1]]!=1)
            {
                z=1;
            }
            if(z==1)
            {
                cout<<"NO"<<endl;
            }
            else{
                map<int , int> m3;
                vector<int> v[n+5];
                for(int i=0;i<n;i++)
                {
                    if(a[i]!=b[i])
                    {

                    
                    v[b[i]].push_back(i+1);}

                }
                for(int i=0;i<n;i++)
                {
                    if(a[i]==b[i])
                    {
                        v[b[i]].push_back(i+1);
                    }
                }
                for(int i=0;i<n+1;i++)
                {
                    if(v[i].size()!=0)
                    {
                        v[i].push_back(0);
                    }
                }
                vector<int> ans;
                int count=0;
                int x;
                for(int i=0;i<m1;i++)
                {
                    int p=c[i];
                    if(v[p].size()==0)
                    {
                        ans.push_back(-1);
                    }
                    else{
                        int j=v[p][v[p].size()-1];
                        
                        ans.push_back(v[p][j]);
                        if(i==m1-1)
                        {
                            x=v[p][j];
                        }
                        if(j<v[p].size()-2)
                        {
                            v[p][v[p].size()-1]++;
                        }
                        
                    }
                }
                for(int i=0;i<ans.size();i++)
                {
                    if(ans[i]==-1)
                    {
                        ans[i]=x;
                    }
                }
                cout<<"YES"<<endl;
                for(int i=0;i<ans.size();i++)
                {
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
        }

    }
}