#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<int> v;
	unordered_map<int,int> m;
	unordered_map<int,int> m1;
	vector<int> v1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		{
			m[a[i]]=m[a[i]]+1;
			if(m[a[i]]>1)
			{
				if(v.size()!=0)
				{
					cout<<-1<<endl;
					return 0;
				}
				else{
					v1.push_back(i);
					m.clear();
					m[a[i]]=m[a[i]]+1;
//					cout<<"next day map is"<<endl;
//					for(auto it : m)
//				{
//					cout<<it.first<<" "<<it.second<<endl;
//				}
					v.push_back(a[i]);
				}
			}
			else if(m[a[i]]==1)
			{
				v.push_back(a[i]);
			}
		}
		else if(a[i]<0)
		{
			int k=abs(a[i]);
			if(m[k]!=1)
			{
//				cout<<"ter"<<endl;
//				cout<<k<<" "<<i<<endl;
//				for(auto it : m)
//				{
//					cout<<it.first<<" "<<it.second<<endl;
//				}
				cout<<-1<<endl;
				return 0;
			}
			else {
				m[a[i]]=m[a[i]]+1;
				if(m[a[i]]>1)
				{
					cout<<-1<<endl;
					return 0;
				}
				else {
//					cout<<"value of i is"<<i<<endl;
//					for(int i=0;i<v.size();i++)
//					{
//						cout<<v[i]<<" ";
//					}
//					cout<<endl;
	auto it = find(v.begin(),v.end(),k);
	v.erase(it);
	
				}
			}
		}
	}
	if(v.size()!=0)
	{
		cout<<-1<<endl;
		return 0;
	}
	if(v1.size()==0)
	{
		cout<<1<<endl;
		cout<<n<<endl;
	}
	else {
		cout<<v1.size()+1<<endl;
		for(int i=0;i<v1.size();i++)
		{
			if(i==0)
			{
				cout<<v1[i]<<" ";
			}
			else {
				cout<<v1[i]-v1[i-1]<<" ";
			}
		}
		cout<<n-v1[v1.size()-1]<<endl;
	}
	return 0;
}
