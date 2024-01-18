#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string x,y;
	cin>>x>>y;
	int t=0;
	int count=0;
	for(int i=0;i<y.size();i++)
	{
		int h=0;
		if(i+x.size()>m)
		{
			break;
		}
		else{
			for(int j=0;j<n;j++)
			{
				if(y[i+j]==x[j])
				{
					h=h+1;
				}
			}
		}
		if(h>count)
		{
			count=h;
			t=i;
		}
	}
	cout<<n-count<<endl;
	for(int j=0;j<n;j++)
	{
		if(x[j]!=y[j+t])
		{
		cout<<j+1<<" ";	
		}
	}
	return 0;
}
