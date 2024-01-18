#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int > v;
	for(long long int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
			if(i!=n/i)
		{
			v.push_back(n/i);
		}
		}
		
	}
	vector<long long int > ans;
	for(long long int i=0;i<v.size();i++)
	{
		long long int a=v[i];
		long long int b=n/a;
		long long int count=b;
		long long int z=b*(b-1)/2;
		count=count+a*z;
		ans.push_back(count);
	}
	sort(ans.begin(),ans.end());
	for(long long int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
