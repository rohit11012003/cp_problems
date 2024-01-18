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
        vector<vector<int>> a(n,vector<int>(n,0));
        int p=k/n;
        int z=0;
       // cout<<p<<endl;
        for(int i=0;i<n;i++)
        {
            int j=z;
            int p1=p;
            while(p1>0)
            {
                a[i][j]=1;
                j++;
                p1--;
                if(j>=n)
                {
                    j=0;
                }
            }
            z++;
        }
        if(p==0)
        {
            int p=k%n;
            for(int i=0;i<p;i++)
            {
                a[i][i]=1;
            }
        }
        else{
            int p=k%n;
            for(int i=0;i<p;i++)
            {
                if(a[i][0]==0&&a[i][n-1]==1)
                {
                    a[i][0]=1;
                }
                else{
                    for(int j=1;j<n;j++)
                {
                    if(a[i][j-1]==1&&a[i][j]==0)
                    {
                        a[i][j]=1;
                        break;
                    }
                }}
            }
        }
        vector<int> r;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                count1=count1+a[i][j];
            }
            r.push_back(count1);
            count1=0;
        }
        vector<int> c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                count1=count1+a[j][i];
            }
            c.push_back(count1);
            count1=0;
        }
        sort(c.begin(),c.end());
        sort(r.begin(),r.end());
        int x1=c[0];
        int x2=c[n-1];
        int ans=0;
        ans+=pow(abs(x2-x1),2);
        int y1=r[0];
        int y2=r[n-1];
        ans+=pow(abs(y2-y1),2);
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }


    }
}