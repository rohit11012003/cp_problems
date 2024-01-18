#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
vector<int> v[N];
int main()
{
    int q;
    int count=0;
    int ans=0;
    vector<int> v1;
    map<int , int> m1;
    vector<int> v2;
    while(q--)
    {
        int n;
        cin>>n;
        
        if(n==1)
        {
            int m;
            cin>>m;
            count++;
            v1.push_back(count);
            if(m>ans)
            {
                if(ans!=0)
                {
                    v2.push_back(ans);
                }
                ans=m;
            }
            v[m].push_back(count);
            m1[count]=m;

        }
        if(n==2)
        {
            cout<<v1[0]<<endl;
            int z=m1[v1[0]];
            v1.erase(v1.begin());
            if(v[z].size()==1)
            {
                if(ans==z)
                {
                 v2.erase(v2.begin()+v2.size()-1);
                ans=v2[v2.size()-1];
                v[z].erase(v[z].begin());}
                else{
                    v[z].erase(v[z].begin());
                }
            }
            else{
                v[z].erase(v[z].begin());
            }
        }
        else if(n==3)
        {
            cout<<v[ans][0]<<endl;
            int p=v[ans][0];
            if(v[ans].size()==1)
            {
                v2.erase(v2.begin()+v2.size()-1);
                ans=v2[v2.size()-1];
                v[p].erase(v[p].begin());
            }
            else{
                v[p].erase(v[p].begin());
            }
            auto it=find(v1.begin(),v1.end(),p);
            v2.erase(it);


        }
    }

}