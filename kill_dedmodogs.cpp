#include<bits/stdc++.h>
using namespace std; 
long long int mod=1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        unsigned long long int z=n*(n+1);
        z=z%mod;
        z=z*((4*n)-1);
        z=z%mod;
        z=z*2022;
        z=z/6;
        z=z%mod;
        cout<<z<<endl;
    }
};
