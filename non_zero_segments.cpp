#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<long long int> v;
    unordered_map<long long int , int> m;
    m[0]=1;
    long long int ans1=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        
        ans1=ans1+a[i];
       // cout<<ans1<<" ";
        if(m[ans1]==1)
        {
            count++;
            m.clear();
            m[0]=1;
            ans1=a[i];
            m[ans1]=1;
        }
        else{
            m[ans1]=1;
        }
    }
   // cout<<endl;
    
    
    cout<<count<<endl;
}