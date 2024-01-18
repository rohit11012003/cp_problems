#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
vector<int> cycles[N];
void cycle(int ind , int p, int par[],int color[] ,int mark[], int &currcycle)
{
	if(color[ind]==2)
	{
		return ;
	}
	if(color[ind]==1)
	{
		currcycle++;
		
		int cur = p;
      mark[cur] = currcycle;
      //mark[ind]=currcycle;
      while (cur != ind) {
         cur = par[cur];
         mark[cur] = currcycle;
      }
      return;
	}
	par[ind]=p;
	color[ind]=1;
	for(auto child : v[ind])
	{
		if(child==p)
		{
			continue;
		}
		cycle(child,ind,par,color,mark,currcycle);
	}
	color[ind]=2;
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int par[N];
	int mark[N];
	int color[N];
	int currcycle=0;
	cycle(1,0,par,color,mark,currcycle);
	for(int i=0;i<=n;i++)
	{
		if(mark[i]!=0)
		{
			cycles[mark[i]].push_back(i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(cycles[i].size()!=0)
		{
			for(auto child : cycles[i])
			{
				cout<<child<<" ";
			}
			cout<<endl;
		}
		else{
			return 0;
		}
	}
	
}
