#include<bits/stdc++.h>
using namespace std;
void fun(int i, int j, vector<vector<int>> &a, vector<vector<int>> &v, int z, int n)
{
    if(z>n)
    {
        return ;
    }
    if(v[i][j]>z||a[i][j]==0)
    {
        return;
    }
    else{
        v[i][j]=z;
        if(i==n-1)
        {
           if(j==n-1)
           {
            fun(0,0,a,v,z+1,n);
           }
           else{
            fun(0,j+1,a,v,z+1,n);
           }
        }
        else{
            if(j==n-1)
            {
                fun(i+1,0,a,v,z+1,n);
            }
            else{
                fun(i+1,j+1,a,v,z+1,n);
            }
        }
    }
}
void fun1(int i, int j, vector<vector<int>> &a, vector<vector<int>> &v1, int z, int n)
{
    if(z>n)
    {
        return ;
    }
    if(v1[i][j]>z||a[i][j]==0)
    {
        return;
    }
    else{
        v1[i][j]=z;
        if(i==n-1)
        {
           if(j==0)
           {
            fun(0,n-1,a,v1,z+1,n);
           }
           else{
            fun(0,j-1,a,v1,z+1,n);
           }
        }
        else{
            if(j==0)
            {
                fun(i+1,n-1,a,v1,z+1,n);
            }
            else{
                fun(i+1,j-1,a,v1,z+1,n);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++)
            {
                stringstream str;
                str<<s[j];
                int k;
                str>>k;
                a[i][j]=k;
            }
        }
     
        vector<vector<int>> v(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                fun(i,j,a,v,1,n);
            }
        }
       int ma=0;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(ma<v[i][j])
            {
                ma=v[i][j];
            }
        }
       }
       cout<<ma<<endl;
       int count1=0;
       int count2=0;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                count1++;
            }
            else{
                count2++;
            }
        }
       }
        vector<vector<int>> v1(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                fun1(i,j,a,v1,1,n);
            }
        }
         for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
        {
            if(ma<v1[i][j])
            {
                ma=v1[i][j];
            }
        }
       }
       cout<<ma<<endl;
       int ans=0;
       ans+=n-ma;
       ans+=count1-ma;
       cout<<ans<<endl;
    }
}