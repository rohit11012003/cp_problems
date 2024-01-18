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
        if(n%2!=0)
        {
            cout<<-1<<endl;
        }
        else{
            vector<pair<int , int >> v;
            int p=0;
            int z=0;
            for(int i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    if(a[i]==a[i-1])
                    {
                        v.push_back({p,i});
                    }
                    else{
                        v.push_back({i,i});
                    }
                }
                 else if(a[i+1]==a[i])
                {
                    z++;
                }
                else{
                    if((z+1)%2==0)
                    {
                        v.push_back({p,i});
                        z=0;
                        p=i+1;
                    }
                    else{
                        if(z-1>=0)
                        {

                        
                        v.push_back({p,i-1});
                        z=0;
                        v.push_back({i,i});
                        v.push_back({i+1,i+1});
                        p=i+2;
                        i++;
                        }
                        else{
                            v.push_back({i,i});
                            v.push_back({i+1,i+1});
                            p=i+2;
                            i++;
                        }
                    }
                }
            }
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
            }
        }

    }
}