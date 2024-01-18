#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int ,int> > ans;
	vector<long long int> v;
	for(int i=0;i<n;i++)
	{
		long long int d;
		cin>>d;
		v.push_back(d);
	}
	vector<long long int> s=v;
	sort(s.begin(),s.end());
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=v[i])
		{
			for(int j=i+1;j<n;j++)
			{
				if(s[i]==v[j]){
					ans.push_back(make_pair(j,i));
					for(int h=j;h>i;h--)
					{
						swap(v[h],v[h-1]);
					}
					break;
				}
			}
		}
	}
	for(int i=0;i<ans.size();i++)
	{
	    while(ans[i].first!=ans[i].second)
	    {
	    	cout<<ans[i].first<<" "<<ans[i].first+1<<endl;
	    	ans[i].first=ans[i].first-1;;
		}
	}
}
