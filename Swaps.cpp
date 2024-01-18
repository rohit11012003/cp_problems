#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[n];
		//vector<pair<int,int> > v;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		vector<int> v;
		map<int,int> m;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				v.push_back(b[i]);
				for(int j=1;j<v[0];j++)
				{
					m[j]=i;
				}
			}
			else {
				if(b[i]>v[v.size()-1])
				{
					v.push_back(b[i]);
				//	cout<<v[v.size()-2]<<" "<<v[v.size()-1]<<endl;
					for(int j=v[v.size()-2];j<v[v.size()-1];j++)
					{
						m[j]=i;
					}
				}
			}
		}
//		for(int i=1;i<2*n;i++)
//		{
//			cout<<m[i]<<" ";
//		}
//		cout<<endl;
	vector<int> v1;
		for(int i=0;i<n;i++)
		{
			v1.push_back(i+m[a[i]]);
			
		}
		sort(v1.begin(),v1.end());
		cout<<v1[0]<<endl;
		
	}
	return 0;
}
