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
        unordered_map<int , int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=m[a[i]]+1;
        }
        int z=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>n)
            {
                z=1;
                break;
            }
            if(m[a[i]]>2)
            {
                z=1;
                break;
            }

        }
        if(m[n]==0||m[1]>1)
        {
            z=1;
            //cout<<"it happens "<<endl;
          
        }
        if(z==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            
            vector<int> v1;
            vector<int> v2;
            for(int i=1;i<=n;i++)
            {
                if(m[i]==0)
                {
                    v1.push_back(i);
                }
                if(m[i]==2)
                {
                    v2.push_back(i);
                }
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            if(v1.size()!=v2.size())
            {
                cout<<"NO"<<endl;
            }
            else{
                unordered_map<int, int> m1;
                for(int i=0;i<v1.size();i++)
                {
                    m1[v2[i]]=v1[i];
                    if(v1[i]>v2[i])
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
                    vector<int> ans1;
                    vector<int> ans2;
                    unordered_map<int, int> m3;
                    for(int i=0;i<n;i++)
                    {
                        if(m[a[i]]==1)
                        {
                            ans1.push_back(a[i]);
                            ans2.push_back(a[i]);
                        }
                        else if (m[a[i]]==2)
                        {
                            if(m3[a[i]]==0)
                            {
                                ans1.push_back(a[i]);
                                ans2.push_back(m1[a[i]]);
                                m3[a[i]]=1;
                            }
                            else if (m3[a[i]]==1)
                            {
                                ans1.push_back(m1[a[i]]);
                                ans2.push_back(a[i]);
                            }
                        }

                    }
                    cout<<"YES"<<endl;
                    for(int i=0;i<n;i++)
                    {
                        cout<<ans1[i]<<" ";
                    }
                    cout<<endl;
                    for(int i=0;i<n;i++)
                    {
                        cout<<ans2[i]<<" ";
                    }
                    cout<<endl;
                }

            }
        }

    }
}