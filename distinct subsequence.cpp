#include<bits/stdc++.h>
using namespace std;
int dp[705][705];



int fun(string s,string s1, int b,int t,int ans)
{
    
    if(t==s1.size())
    {
        return  1;
    }
    else if(b<=-1)
    {
        return 0;
    }
   
    for(int i=b;i>=0;i--)
    {
        if(s[i]==s1[s1.size()-1-t])
        {
            
          
           if(t==0)
           {
             ans=ans+fun(s,s1,i-1,t+1,ans);   
           }
           else{
              return  fun(s,s1,i-1,t+1,ans);
           }
        }
    }
    return ans;
}
int main()
{
	string A,B;
	cin>>A>>B;
	int a=A.size();
    int b=B.size();
    for(int i=0;i<705;i++)
    {
        for(int j=0;j<705;j++)
        {
            dp[i][j]=-1;
        }
    }
    return fun(A,B,b-1,0,0);
}
