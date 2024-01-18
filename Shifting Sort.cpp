#include<bits/stdc++.h>
using namespace std;
struct val{
	int a1;
	int a2;
	int a3;
};
int main()
{
	int t;
	cin>>t;
	for(int g=0;g<t;g++)
	{
		vector<val> va;
		int n;
		cin>>n;
		vector<long long int > v;
		for(int i=0;i<n;i++)
		{
			long long int y;
			cin>>y;
			v.push_back(y);
		}
		vector <long long int> a;
		a=v;
		sort(a.begin(),a.end());
		for(int i=0;i<n-1;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(a[i]==v[j])
				{
					val v_1;
					v_1.a1=i+1;
					v_1.a2=j+1;
					v_1.a3=j-i;
					if(i!=j)
					{
						va.push_back(v_1);
					}
					for(int h=j;h>i;h--)
					{
						long long int f=v[h];
						v[h]=v[h-1];
						v[h-1]=f;
					}
					break;
				}
			}
		}
		if(va.size()==0)
		{
			cout<<0<<endl;
		}
		else{
		cout<<va.size()<<endl;
		for(int i=0;i<va.size();i++)
		{
			cout<<va[i].a1<<" "<<va[i].a2<<" "<<va[i].a3<<endl;
		}}
		
	}
	return 0;
}
