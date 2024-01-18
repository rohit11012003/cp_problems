#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        unordered_map<int, int> m;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]!=b[i])
            {
                m[b[i]]=m[b[i]]+1;
            }
        }
        int c[m];
        for(int j=0;j<m;j++)
        {
            cin>>c[j];
            m[c[j]]=m[c[j]]--;
        }
        
    }
}