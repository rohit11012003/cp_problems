#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	stringstream str;
	str<<n;
	string s;
	str>>s;
	int j=0;
	int t=s.size();
	long long int count=0;
	for(int i=1;i<=t;i++)
	{
		if(i==t)
		{
			count=count+((n-pow(10,i-1)+1)*i);
		}
		else {
			count=count+((pow(10,i)-pow(10,i-1))*i);
		}
	}
	cout<<count<<endl;
	return 0;
}
