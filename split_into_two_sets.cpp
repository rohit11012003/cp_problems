#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int> v[N];
int vis[N];
void dfs(int ind , int &z)
{
    vis[ind]=1;
    z++;
    for(auto child : v[ind])
    {
        if(vis[child]==0)
        {
            dfs(child,z);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<pair<int, int>> v1;
        int z=0;
        map<int, int> m;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            m[a]=m[a]+1;
            m[b]=m[b]+1;
            if(a==b)
            {
                z=1;
            }
            else{
                if(a>b)
                {
                    swap(a,b);
                }
                v1.insert({a,b});
            }

        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]!=2)
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

        
        int p=0;
        for(auto it :v1)
        {
           
            v[it.first].push_back(it.second);
            v[it.second].push_back(it.first);
        }
        for(int i=1;i<n;i++)
        {
            if(v[i].size()!=0)
            {
                if(vis[i]==0)
                {
                    int z=0;
                    dfs(i,z);
                    if(z%2!=0)
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
        if(p==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        for(int i=0;i<=n;i++)
        {
            vis[i]=0;
            v[i].clear();
        }

        }

    }
}