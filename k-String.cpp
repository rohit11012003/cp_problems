#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	string s;
	cin>>s;
	vector<int> a;
	vector<char> b;
	if(s.size()==1)
	{
		cout<<s<<endl;
	}
else{

	for(int i=0;i<=s.size()-1;i++)
	{
		b.push_back(s[i]);
		int t=1;
		for(int j=i+1;j<s.size();j++)
		{
			if(s[i]==s[j])
			{
				t++;
				s.erase(s.begin()+j);
				j=j-1;
			}
			
		}
		a.push_back(t);
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i]%k!=0)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<a.size();j++)
			{
				for(int g=0;g<a[j]/k;g++)
				{
					cout<<b[j];
				}
			}
		}}
	
	return 0;
}
