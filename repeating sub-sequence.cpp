#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int fun(string &a,int l,int r,int n)
{
    if(l==r)
    {
        return 0;
    }
    if(r==n-1)
    {
        return 0;
    }
    else{
        int z=r-l+1;
        int fl=0;
        string p=a.substr(l,z);
        for(int j=l+1;j+z<=n;j++)
        {
            string b=a.substr(j,z);
            if(b==p)
            {
                fl=1;
                break;
            }
        }
        if(fl==1)
        {
            return max(z,fun(a,l,r+1,n));
        }
        else{
            return fun(a,l+1,r+1,n);
        }
    }
}
int main()
{
	string A;
	cin>>A;
	for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            dp[i][j]=-1;
        }
    }
    if(A.size()==1)
    {
        return 0;
    }
    int n=A.size();
    cout<<  fun(A,0,1,n);
}
