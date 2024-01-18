#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int l[n];
		int r[n];
		for(int i=0;i<n;i++)
		{
			cin>>l[i]>>r[i];
		}
		int time=0;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			time=max(time,l[i]-1);
			if(time<r[i])
			{
				time=time+1;
				v.push_back(time);
			}
			else {
				v.push_back(0);
			}
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
