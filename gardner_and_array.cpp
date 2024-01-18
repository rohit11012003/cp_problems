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
        vector<vector<int>> v;
        unordered_map<int, int> m;
        while(n--)
        {
            int k;
            cin>>k;
            vector<int> v1;
            while(k--)
            {
                int a;
                cin>>a;
                v1.push_back(a);
                m[a]=m[a]+1;
            }
            v.push_back(v1);
        }
        unordered_map<int, int> m1;
        for(auto& it : m)
        {
            if(it.second>=2)
            {
                m1[it.first]=1;

            }
        }
        int z=0;
        for(int i=0;i<v.size();i++)
        {
            vector<int> v3=v[i];
            int p=0;
            for(int j=0;j<v3.size();j++)
            {
                if(m1[v3[j]]!=1)
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
            cout<<"NO"<<endl;
        }
        else if(z==1)
        {
            cout<<"YES"<<endl;
        }
    }
}