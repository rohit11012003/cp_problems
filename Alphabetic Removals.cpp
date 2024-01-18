#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int >v;
	for(int i=0;i<n;i++)
	{
		int j=s[i];
		v.push_back(j);
	}
	sort(v.begin(),v.end());
	
		int count=0;
		
	if(v[k-1]==v[0])
	{
		for(int i=0;i<n;i++)
		{
			int j=s[i];
			if(j==v[0])
			{
				s.erase(s.begin()+i);
				i=i-1;
				count++;
			}
			if(count==k)
			{
				break;
			}
		}
	}
else {

	for(int i=0;i<s.size();i++)
	{
		int j=s[i];
		if(j<v[k-1])
		{
			s.erase(s.begin()+i);
			
				count++;
				i=i-1;
			
		}
	}
	for(int i=0;i<s.size();i++)
	{
		int j=s[i];
		if(j==v[k-1])
		{
			s.erase(s.begin()+i);
			count++;
			i=i-1;
		}
		if(count==k)
		{
			break;
		}
	}}
	cout<<s<<endl;
	return 0;
}
