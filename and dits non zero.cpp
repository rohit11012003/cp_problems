#include<bits/stdc++.h>
using namespace std;
//#define long long ll;
int main()
{
	vector<vector<int> > v;
	for(  long long  int i=1;i<=200005;i++)
	{
		vector<int > h;
		for(int j=20;j>=0;j--)
	{
		h.push_back((i>>j)&1);
	}
	
	
	v.push_back(h);}
//	for(int i=0;i<=1;i++)
//	{
//		for(int j=0;j<=20;j++)
//		{
//			cout<<v[i][j];
//		}
//		cout<<endl;
//	}
	vector<vector<int > > v1;
	for ( long long int i=0;i<=20;i++)
	{
		int j=0;
		vector<int> h;
		for(int k=0;k<200005;k++)
		{
			j=j+v[k][i];
			h.push_back(j);
			
		}
		v1.push_back(h);
	}
//	for(int i=0;i<=20;i++)
//	{
//		for(int j=0;j<=1;j++)
//		{
//			cout<<v1[i][j];
//		}
//		cout<<endl;
//	}
	int t;
	cin>>t;
	while(t--)
	{
		
	
	
	
	
	int l,r;
	cin>>l>>r;
	int ans=0;
	for(int i=0;i<=20;i++)
	{
		int g;
	//	cout<<v1[i][r-1]<<" "<<v1[i][l-1]<<endl;
	if(v[l-1][i]==1)
	{
		g=v1[i][r-1]-v1[i][l-1]+1;
		}
		else{
			 g=v1[i][r-1]-v1[i][l-1];
		}
		//cout<<g<<endl;
		if(g>ans)
		{
			ans=g;
		}
	}
//	for(int j=l-1;j<=r-1;j++)
//	{
//		for(int i=0;i<=20;i++)
//		{
//			cout<<v[j][i];
//		}
//		cout<<endl;
//	}

	cout<<r-l+1-ans<<endl;
}
}
