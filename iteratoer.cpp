#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=0;i<5;i++)
	{
		v.push_back(i);
	}
	vector<pair<int,int> >v1;
	vector<int>::iterator it=v.begin();
	cout<<*(it)<<endl;
	cout<< &it<<endl;
	it++;
	cout<< &it<<endl;
	cout<<*(it)<<endl;
	cout<<*(it++)<<endl;
	cout<<*(it)<<endl;
	cout<<*(++it)<<endl;
	cout<<&it<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v1.push_back({a,b});	
		}
		vector<pair<int,int> >::iterator ig=v1.begin();
     	cout<<(*ig).first<<" "<<(*ig).second<<endl;
		ig++;
		cout<<ig->first<<" "<<ig->second<<endl;
	return 0;
}
