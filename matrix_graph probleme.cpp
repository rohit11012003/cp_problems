#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int> > &img,int i,int j,int initialcolor,int newcolor)
{
	int m=img.size();
	int n=img[0].size();
	if(i<0||j<0) return;
	if(i>m-1||j>n-1) return;
	if(img[i][j]!=initialcolor) return ;
	img[i][j]=newcolor;
	dfs(img,i-1,j,initialcolor,newcolor);
	dfs(img,i+1,j,initialcolor,newcolor);
	dfs(img,i,j-1,initialcolor,newcolor);
	dfs(img,i,j+1,initialcolor,newcolor);
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int> > img;
	for(int i=0;i<m;i++)
	{
		vector<int> v1;
		for(int j=0;j<n;j++)
		{
			int a;
			cin>>a;
			v1.push_back(a);
		}
		img.push_back(v1);
	}
	int sr,sc,newcolor;
	
	cin>>sr>>sc>>newcolor;
	int initialcolor=img[sr-1][sc-1];
	dfs(img,sr-1,sc-1,initialcolor,newcolor);
	cout<<"hello"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<img[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
