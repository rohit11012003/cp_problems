#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x;
		cin>>n>>m>>x;
		vector<pair<int,int> > v;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			v.push_back({a,i});
		}
		sort(v.begin(),v.end());
		int ans[m];
		for(int i=0;i<m;i++)
		{
			ans[i]=v[0].first;
			arr[v[0].second]=i+1;
			v.erase(v.begin());
		}
		for(int i=0;i<m;i++)
		{
			if(v.size()==0)
			{
				break;
			}
			else{
				ans[i]=ans[i]+v[v.size()-1].first;
				arr[v[v.size()-1].second]=i+1;
				v.erase(v.begin()+v.size()-1);
			}
			if(i==m-1)
			{
				sort(ans,ans+m);
				i=-1;
			}
		}
		sort(ans,ans+m);
//		for(int i=0;i<m;i++)
//		{
//			cout<<ans[i]<<" ";
//		}
//		cout<<endl;
		if(ans[m-1]-ans[0]>x)
		{
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		cout<<endl;
	}
}
