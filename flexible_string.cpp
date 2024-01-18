#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        vector<char> v;
        map<char, int> m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]=m[a[i]]+1;
            if(m[a[i]]==1)
            {
                v.push_back(a[i]);
            }
        }
        
         vector<pair<int , int>> v5;
                int l=-1;
                int r=-1;
                for(int i=0;i<n;i++)
                {
                    //cout<<i<<endl;
                    //cout<<"hello"<<endl;
                    if(a[i]==b[i])
                    {
                        if(l==-1)
                        {
                            l=i;
                           // cout<<"hell01"<<endl;
                        }
                        if(i==n-1)
                        {
                            if(l!=-1)
                            {
                                v5.push_back({l,i});
                            }
                        }
                    }
                    else{
                        if(l!=-1)
                        {
                            r=i-1;
                            v5.push_back({l,r});
                           // cout<<"hello2"<<endl;
                            l=-1;
                            r=-1;
                        }
                    }
                }
                
                long long int z=0;
                for(int i=0;i<v5.size();i++)
                {
                   int x,y;
                    x=v5[i].first;
                    y=v5[i].second;
                    cout<<x<<" "<<y<<endl;
                    long long int d=y-x;
                    d=d+1;
                    d=d*(d+1);
                    z=z+d/2;

                }
                long long int ans2=z;
                //cout<<ans2<<endl;
                //return 0;
              

                
        while(k--)
        {
            if(v.size()==0)
            {
                break;
            }
            vector<pair<string ,long long int >> v1;
            long long int ans1=ans2;
            char yo;
            for(int e=0;e<v.size();e++)
            {
                yo=v[e];
                string temp=a;
                for(int i=0;i<n;i++)
                {
                    if(temp[i]==v[e])
                    {
                        temp[i]=b[i];
                    }
                }
                vector<pair<int , int>> v2;
                int l=-1;
                int r=-1;
                for(int i=0;i<n;i++)
                {
                    if(temp[i]==b[i])
                    {
                        if(l==-1)
                        {
                            l=i;
                        }
                        if(i==n-1)
                        {
                            if(l!=-1)
                            {
                                v2.push_back({l,i});
                            }
                        }
                    }
                    else{
                        if(l!=-1)
                        {
                            r=i-1;
                            v2.push_back({l,r});
                            l=-1;
                            r=-1;
                        }
                    }
                    
                }
                if(v[e]=='q')
                    {
                    for(int j=0;j<v2.size();j++)
                    {
                        cout<<v2[j].first<<" "<<v2[j].second<<endl;
                    }
                   
                }
                long long int z=0;
                for(int i=0;i<v2.size();i++)
                {
                    int l,r;
                    l=v2[i].first;
                    r=v2[i].second;
                    long long int d=r-l;
                    d=d+1;
                    d=d*(d+1);
                    z=z+d/2;

                }
                if(z>ans1)
                {
                    ans1=z;
                    yo=v[e];
                }
                

            }
            ans2=ans1;
            for(int i=0;i<n;i++)
            {
                if(a[i]==yo)
                {
                    a[i]=b[i];
                }
            }
            cout<<yo<<endl;
           cout<<ans2<<endl;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==yo)
                {
                    v.erase(v.begin()+i);
                    break;
                }
            }
        }
        cout<<ans2<<endl;
    }
}