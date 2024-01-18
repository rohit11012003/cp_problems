#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		string a;
		string b;
		cin>>a>>b;
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			int k=a[i];
			v1.push_back(k);
		}
		for(int i=0;i<m;i++)
		{
			int k=b[i];
			v2.push_back(k);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		int a1=0;
		int b1=0;
		string g;
		int j=0;
		int z1=0;
		int z2=0;
		for(int i=0;;i++)
		{
			if(v1[i]>v2[j])
			{
				g=g+a[i];
				z1++;
				z2=0;
			}
			else if(v1[i]<v2[j])
			{
				g=g+b[j];
				j++;
				i--
				z1=0;
				z2++;
			}
			if(z1==k)
			{
				g=g+b[j];
				z2++;
				z1=0;
			}
			if(z2==k)
			{
				i++;
				g=g+a[i];
				z2=0;
				z1++;
			}
			if(i>=a.size()-1)
			{
				a1=1;
				break;
			}
			else if(j>=b.size())
			{
				b1=1;
				break;
			}
		}
	}
}
