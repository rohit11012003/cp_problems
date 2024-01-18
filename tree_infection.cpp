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
        vector<int> v[n+5];
        int a[n+1];
        for(int i=2;i<=n;i++)
        {
            cin>>a[i];
            v[a[i]].push_back(i);
        }
       vector<int> v1;
       for(int i=0;i<n;i++)
       {
        if(v[i].size()>0)
        {
            v1.push_back(v1[i].size());
        }
        sort(v1.begin(),v1.end(),greater<int>());
        int z=0;
        vector<int> v2;
        for(int i=0;i<v1.size();i++)
        {
            v2.push_back(z+v1[i]);
            z++;
        }
        sort(v2.begin(),v2.end(),greater<int>());
        if(v2[0]<=z+1)
        {
            cout<<z+1<<endl;
        }
        else{
            vector<int> v3;
            for(int i=0;i<v2.size();i++)
            {
                if(v2[i]>z+1)
                {
                    v3.push_back(v2[i]-z+1);
                }
                else{
                    break;
                }
            }
            
        }

       }
        if(1+sum1>=sum2)
        {
            cout<<sum1+1<<endl;
        }
        else{
            int p=n/2;
            cout<<p+1<<endl;
        }
        

    }
}