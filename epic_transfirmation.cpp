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
        long long int a[n];
        map<long long int , int > m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=m[a[i]]+1;
        }
        vector<long long int > v;
        for(auto it : m)
        {
            v.push_back(it.second);
        }
        long long int sum=0;
        long long int z=v[0];
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            if(v[i]>z)
            {
                z=v[i];
            }
        }
        sum=sum-z;
        if(z>=sum)
        {
            cout<<z-sum<<endl;
        }
        else{
            sum=sum+z;
            if(sum%2==0)
            {
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}