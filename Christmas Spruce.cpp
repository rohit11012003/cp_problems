#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N=10005;
vector<int> v[N];
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int k;
		cin>>k;
		v[k].push_back(i);
	}
	int t=0;
	for(int i=1;i<n;i++)
	{
		if(v[i].size()!=0)
		{
		int h=0;
		for(int j=0;j<v[i].size();j++)
		{
			int g=v[i][j];
			if(v[g].size()==0)
			{
				h++;
			}
		}
		if(h<3)
		{
			t=1;
			break;
		}
	}
	}
	if(t==0)
	{
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No"<<endl;
	}
	return 0;
}
