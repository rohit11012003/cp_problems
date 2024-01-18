#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin>>h>>w;
	vector<string> v;
	for(int i=0;i<h;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	int a[h][w];
	int b[h][w];
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(j==0&&i==0)
			{
				a[i][j]=0;
			}
			else if(j==0&&i!=0)
			{
				a[i][j]=0;
			}
			else{
				if(v[i][j-1]=='.'&&v[i][j]=='.')
				{
					
					a[i][j]=1;
				}
				else{
					a[i][j]=0;
				}
			}
		}
	}
	for(int i=0;i<w;i++)
	{
		for(int j=0;j<h;j++)
		{
			//cout<<i<<" "<<j<<endl;
			if(j==0&&i==0)
			{
				b[j][i]=0;
			}
			else if(j==0&&i!=0)
			{
				b[j][i]=0;
			}
			else{
				if(v[j-1][i]=='.'&&v[j][i]=='.')
				{
					b[j][i]=1;
				}
				else{
					b[j][i]=0;
				}
			}
		}
	}

	
	int ans1[h+1][w+1];
	int ans2[h+1][w+1];
	for(int i=0;i<=h;i++)
	{
		ans1[i][0]=0;
		ans2[i][0]=0;
	}
	for(int i=0;i<=w;i++)
	{
		ans1[0][i]=0;
		ans2[0][i]=0;
	}
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			
			
				ans1[i][j]=ans1[i-1][j]+ans1[i][j-1]-ans1[i-1][j-1]+a[i-1][j-1];
			
		}
	}
	
		for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			
			
				ans2[i][j]=ans2[i-1][j]+ans2[i][j-1]-ans2[i-1][j-1]+b[i-1][j-1];
			
		}
	}
//	for(int i=0;i<h;i++)
//	{
//		for(int j=0;j<w;j++)
//		{
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	cout<<endl;
	for(int i=0;i<=h;i++)
	{
		for(int j=0;j<=w;j++)
		{
			cout<<ans2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<=h;i++)
	{
		for(int j=0;j<=w;j++)
		{
			cout<<ans1[i][j]<<" ";
		}
		cout<<endl;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		int ans;
		ans=ans1[r2][c2]-ans1[r1][c1];
		if(a[r1-1][c1-1]==1)
		{
			ans=ans-1;
		}
		ans+=ans2[r2][c2]-ans2[r1][c1];
		if(b[r1-1][c1-1]==1)
		{
			ans=ans-1;
		}
		cout<<ans<<endl;
	}
	
}
