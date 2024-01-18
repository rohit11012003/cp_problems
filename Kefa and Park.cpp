#include<bits/stdc++.h>
using namespace std;
const int N	=1e5+5;
vector<int> v[N];
void dfs(int ind, int par, int c[],int ma, int curr, int &count, int ch)
{
	//cout<<ind<<" "<<par<<" "<<curr<<endl;
	//cout<<"ind is "<<ind<<" "<<ch<<endl;
	if(v[ind].size()==1&&ind!=1)
	{
		if(ch==0)
		{
			count++;
			return ;
		}
	}
	int z=ch;
	for(auto child: v[ind])
	{
	
		if(child==par)
		{
			continue;
		}
		if(c[child]==1)
		{
			//cout<<ind<<" "<<c[ind]<<endl;
			if(curr+1>ma)
			{
				ch=1;
			}
			dfs(child,ind,c,ma,curr+1,count,ch);
		}
		else{
			//cout<<child<<" "<<ch<<endl;
			dfs(child,ind,c,ma,0,count,z);
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int c[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int z;
	if(c[1]==1)
	{
		z=1;
	}
	else{
		z=0;
	}
	int count=0;
	 dfs(1,0,c,m,z,count,0);
	cout<<count<<endl;
}
