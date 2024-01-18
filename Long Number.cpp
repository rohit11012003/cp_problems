#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<9;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int k=0;
	vector<int> v1;
	for(int i=0;i<n;i++)
	{
		stringstream str;
		str<<s[i];
		int g;
		str>>g;
		v1.push_back(g);
	}
	for(int i=0;i<n;i++)
	{
		if(v1[i]<v[v1[i]-1])
		{
			k=1;
			for(int j=i;j<n;j++)
			{
			//	cout<<v1[j]<<" "<<v[v1[j]-1]<<endl;
				if(v1[j]>v[v1[j]-1])
				{
					break;
				}
				else{
					v1[j]=v[v1[j]-1];
				}
			}
			if(k==1)
			{
				break;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<v1[i];
	}
	cout<<endl;
	return 0;
    
}
