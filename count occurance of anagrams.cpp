#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string pt;
	cin>>pt;
	unordered_map<int ,int> m;
	for(int i=0;i<s.size();i++)
	{
		int j=s[i];
		m[j]=m[j]+1;
	}
	int count=0;
	int i=0;
	int j=0;
	int k=s.size();
	int n=pt.size();
	
	while(j!=n)
	{
		if(j<i+k-1)
		{
		//	cout<<1<<endl;
			int p=pt[j];
			m[p]--;
			cout<<p<<endl;
			if(m[p]==0)
			{
				m.erase(p);
			}
			j++;
//			cout<<"size of m is "<<m.size()<<endl;
//			for(auto it : m)
//			{
//				cout<<it.first<<" "<<it.second<<endl;
//			}
			
		}
		else{
		//	cout<<2<<endl;
			int p=pt[j];
			m[p]--;
			if(m[p]==0)
			{
				m.erase(p);
			}
			if(m.size()==0)
			{
				count++;
			}
			int h=pt[i];
			m[h]++;
			if(m[h]==0)
			{
				m.erase(h);
			}
			i++;
			j++;
		}
		
	}
	cout<<count<<endl;
}
