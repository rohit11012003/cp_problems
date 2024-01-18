#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	cin>>a>>b;
	vector<int> v;
	long long int s[400];
	s[0]=b;
	v.push_back(s[0]);
	int t=0;
	for(int i=0;;i++)
	{
		if(s[i]==a){
			break;
		}
		else if(s[i]<a)
		{
			t=1;
			break;
		}
		else if(s[i]%2==0&&s[i]!=0)
		{
			s[i+1]=s[i]/2;
			v.push_back(s[i+1]);
		}
		else if(s[i]%10==1)
		{
			s[i+1]=s[i]/10;
			v.push_back(s[i+1]);
		}
		else {
			t=1;
			break;
		}
	}
	if(t==1)
	{
		cout<<"NO"<<endl;
	}
	else {
		cout<<"YES"<<endl;
		cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++)
		{
			cout<<v[v.size()-1-i]<<" ";
		}
		
	}
}
