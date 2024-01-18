#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int > v;
	long long int a=2;
	while(n!=1)
	{
		if(n%a==0)
		{
			v.push_back(n);
			n=n/a;
		}
		else{
			a++;
		}

	}
	v.push_back(1);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
