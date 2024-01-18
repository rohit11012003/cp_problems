#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	vector<int > v[51];
	for(int i=0;i<n;i++)
	{
		int z;
		cin>>z;
		if(v[z].size()==0)
		{
			v[z].push_back(i+1);
		}
	}
	while(q--)
	{
		int z;
		cin>>z;
		cout<<v[z][0]<<" ";
		for(int i=1;i<=50;i++)
		{
			if(i!=z&&v[i].size()!=0)
			{
			if(v[i][0]<v[z][0])
			{
				v[i][0]++;
			}
			}
			
			
		}
		v[z][0]=1;
	}
	cout<<endl;
	return 0;
}
