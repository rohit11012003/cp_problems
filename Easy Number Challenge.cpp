#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int> >v;
	for(int i=1;i<=100;i++)
	{
		vector<int> v1;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				v1.push_back(j);
			}
		}
		v.push_back(v1);
	}
	long long int count=0;
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=i;k<=c;k++)
			{
			  set<int> s;
			  for(int h=0;h<v[i-1].size();h++)
			  {
			  	//cout<<v[i-1][h]<<" ";
			  	s.insert(v[i-1][h]);
			  }
			 // cout<<endl;
			  for(int h=0;h<v[j-1].size();h++)
			  {
			  //	cout<<v[j-1][h]<<" ";
			  	s.insert(v[j-1][h]);
			  }
			 // cout<<endl;
			  for(int h=0;h<v[k-1].size();h++)
			  {
			  //	cout<<v[k-1][h]<<" ";
			  	s.insert(v[k-1][h]);
			  }
			//  cout<<endl;
			  for(auto it=s.begin();it!=s.end();it++)
			  {
			  	cout<<*(it)<<" ";
			  }
			  cout<<endl;
			  count=count+s.size();
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
