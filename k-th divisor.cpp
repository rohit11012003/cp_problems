#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int n,k;
cin>>n>>k;
vector<long long int > v1,v2;
for(long long int i=1;i*i<=n;i++)
{
	if(n%i==0)
	{
		if(i!=n/i)
		{
			
		
		v1.push_back(i);
		v2.push_back(n/i);}
		else {
			v1.push_back(i);
		}
	}}
	
	if(k>(v1.size()+v2.size()))
	{
		cout<<-1<<endl;
	}
	else{
		if(k<=v1.size())
		{
			cout<<v1[k-1]<<endl;
		}
		else{
			k=k-v1.size();
			cout<<v2[v2.size()-k]<<endl;
		}
	}
return 0;
}
