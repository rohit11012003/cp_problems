#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	vector<int> v1;
	long long int sum=0;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		v1.push_back(a);
	}
	sort(v1.begin(),v1.end());
	for(long long int i=1;i<pow(10,9);i++)
	{
		if(i==v1[0])
		{
			v1.erase(v1.begin());
		}
		else {
			sum=sum+i;
			if(sum>m)
			{
				break;
			}
			else{
				v.push_back(i);
			}
		}
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
