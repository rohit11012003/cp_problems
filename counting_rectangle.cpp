#include<bits/stdc++.h>
using namespace std;
int main()
{
   // cout<<"helloe"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
       // vector<int> v[1000];
        int n,q;
        cin>>n>>q;
       vector<vector<long long int >> arr(1001,vector<long long int> (1001,0));
        for(int i=0;i<n;i++)
        {
            int h,w;
            cin>>h>>w;
          //  v[h].push_back(w);
            arr[h][w]+=h*w;
        }
       // cout<<"yes"<<endl;
       vector<vector<long long int >> ans(1001,vector<long long int> (1001,0));
        for(int i=1;i<1001;i++)
        {
            for(int j=1;j<1001;j++)
            {
                ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1]+arr[i][j];
            }
        }
        while(q--)
        {
            int h1, w1;
            cin>>h1>>w1;
            h1++;
            w1++;
            int h2,w2;
            cin>>h2>>w2;
            h2--;
            w2--;
            cout<<ans[h2][w2]-ans[h2][w1-1]-ans[h1-1][w2]+ans[h1-1][w1-1]<<endl;

        }
        

    }
}