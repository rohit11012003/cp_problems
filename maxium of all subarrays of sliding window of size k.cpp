#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	map<int, int >m;
	int i=0;
	int j=0;
	int k;
	cin>>k;
	vector<int> ans;
	while(j!=n)
	{
		if(j<i+k-1)
		{
			m[a[j]]=m[a[j]]+1;
			j++;
		}
		else{
			m[a[j]]=m[a[j]]+1;
			auto it=m.end();
			it--;
			int ma=it->first;
			cout<<ma<<endl;
			ans.push_back(ma);
			m[a[i]]=m[a[i]]-1;
			if(m[a[i]]==0)
			{
				m.erase(a[i]);
			}
			i++;j++;
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
