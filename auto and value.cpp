#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		int j;
//		cin>>j;
//		v.push_back(j);
//	}
//	vector<int>::iterator it=v.begin();
//	for(int i=0;i<n;i++)
//	{
//		cout<<*(it+i)<<" ";
//	}
//	cout<<endl;
vector<pair<int,int> >v1;
for(int i=0;i<n;i++)
{
	int a,b;
	cin>>a>>b;
	v1.push_back({a,b});
	
}
for(pair<int,int> value : v1)
{
	cout<<value.first<<" "<<value.second<<endl;
}


	return 0;
}
