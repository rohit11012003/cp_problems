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
        map<long long int, int> m;
        for(int i=0;i<n;i++)
        {
            int j=i%n;
            m[i+1+a[j]]=m[i+1+a[j]]+1;
        }
        int z=0;
        for(auto it :m)
        {
            if(it.second>1)
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
            cout<<"YES"<<endl;
        }
    }
}