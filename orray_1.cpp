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
    vector<long long int > v5;
    for(int i=0;i<n;i++)
    {
        long long int c;
        cin>>c;
        v5.push_back(c);
    }
    map<long long int , int> m5;
    vector<long long int > temp;
    vector<long long int > a;
    for(int i=0;i<n;i++)
    {
        if(m5[v5[i]]==0)
        {
            a.push_back(v5[i]);
            m5[v5[i]]++;
        }
        else{
            temp.push_back(v5[i]);
        }
    }
    sort(a.begin(), a.end(),greater<int>());
    n=a.size();
        map<long long int , vector<int>> m;
        for(int i=0;i<n;i++)
        {
            vector<int > v;
            for(int j=40;j>=0;j--)
            {
                v.push_back((a[i]>>j)&1);
            }
            m[a[i]]=v;
        }
        int z=-1;
        if(a[0]==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            for(int i=0;i<temp.size();i++)
            {
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        else{
            
            for(int i=0;i<m[a[0]].size()-1;i++)
            {
                if(m[a[0]][i]==1&&m[a[0]][i+1]==0)
                {
                    z=i+1;
                    break;
                }
            }
            if(z==-1)
            {
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                for(int i=0;i<temp.size();i++)
                {
                    cout<<temp[i]<<" ";
                }
                cout<<endl;
            }
            else{
                
                map<int ,unsigned long long  int> m3;
                m3[0]=1;
                unsigned long long int sum=1;
                for(int i=1;i<=40;i++)
                {
                    unsigned long long int t=sum+1;
                    m3[i]=t;
                    sum=sum+t;
                }
                //cout<<m3[0]<<" "<<m3[1]<<" "<<m3[2]<<endl;
                map<long long int ,unsigned long long int >m1;
                //cout<<z<<endl;
                for(int i=z;i<m[a[0]].size();i++)
                {
                    if(m[a[0]][i]==0)
                    {
                        int p=40-i;
                        unsigned long long int p1=m3[p];
                       // cout<<p<<" "<<p1<<endl;
                        for(int j=1;j<n;j++)
                        {
                            if(m[a[j]][i]==1)
                            {
                                m1[j]=m1[j]+p1;
                               // cout<<i<<" "<<j<<" "<<a[j]<<" "<<p1<<endl;
                            }
                        }
                    }
                }
                
                for(int i=1;i<n;i++)
                {
                    m1[i]=m1[i]+0;
                }
                
                vector<pair<unsigned long long int , long long int >> v2;
                for(auto it:m1)
                {
                    v2.push_back({it.second,it.first});
                }
                sort(v2.begin(),v2.end());
                
                vector<long long int> v3;
                v3.push_back(a[0]);
                for(int i=v2.size()-1;i>=0;i--)
                {
                    v3.push_back(a[v2[i].second]);
                }
                cout<<a[0]<<" ";
                //vector<long long int > temp;
                for(int i=1;i<v3.size();i++)
                {
                    cout<<v3[i]<<" ";
                }
                //cout<<"yes"<<endl;
                for(int i=0;i<temp.size();i++)
                {
                    cout<<temp[i]<<" ";
                }
                cout<<endl;
            }
        }
}
}