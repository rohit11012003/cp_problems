#include<bits/stdc++.h>
using namespace std;
int fun(string &a,string &b,int x,int y)
{
    if(x==-1||y==-1)
    {
        if(x==-1&&y==-1)
        {
            return 0;
        }
        else{
            return max(x+1,y+1);
        }
    }
    if(a[x]==b[y])
    {
        return fun(a,b,x-1,y-1);
    }
    else{
        //relpace kar diya
        int ans=fun(a,b,x-1,y-1)+1;
        ans=min(ans,1+fun(a,b,x,y-1));
        ans=min(ans,1+fun(a,b,x-1,y));
        
    }
}
int main()
{
	string a,b;
	cin>>a>>b;
	int x=a.size();
    int y=b.size();
     cout<< fun(a,b,x,y);
}
