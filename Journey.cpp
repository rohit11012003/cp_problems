#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
vector<double> v1;
void fun(int ind, int par, double l, double prob)
{
	if(v[ind].size()==1&&ind!=1)
	{
		v1.push_back(l/prob);
	}
	else{
		for(auto child : v[ind])
		{
			if(child==par) continue;
			int z;
			if(v[ind].size()==2&&ind!=1)
			{
				z=prob;
			}
			else if(v[ind].size()==2&&ind==1)
			{
				z=prob*v[ind].size();
			}
			else if(v[ind].size()==1)
			{
				z=prob*1;
			}
			else if(v[ind].size()>2&&ind==1)
			{
				z=prob*v[ind].size();
			}
			else{
			z=prob*(v[ind].size()-1);	
			}
			fun(child,ind,l+1,z);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	fun(1,0,0, 1);
	double  sum=0;
	for(int i=0;i<v1.size();i++)
	{
		sum=sum+v1[i];
	}
	//double ans=sum/v1.size();
	cout << fixed << setprecision(20) << sum         << endl;
}
