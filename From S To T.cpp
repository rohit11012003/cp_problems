#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		string s,t,p;
		cin>>s>>t>>p;
		map<int,int> m1;
		for(int i=0;i<p.size();i++)
		{
			int k=p[i];
			m1[k]=m1[k]+1;
		}
		int h=0;
		int j=0;
		for(int i=0;i<t.size();i++)
		{
			if(j==s.size())
			{
				int k=t[i];
				if(m1[k]==0)
				{
					h=1;
					break;
				}
				else {
					m1[k]--;
					string f;
					f=f+t[i];
					s.insert(j,f);
					j++;
				}
			}
			else {
			
			if(t[i]==s[j])
			{
				//cout<<"yes "<<i<<endl;
				j++;
			}
			else if(t[i]!=s[j])
			{
				int k=t[i];
				if(m1[k]==0)
				{
					h=1;
					break;
				}
				else {
				//	cout<<"yes present "<<i<<endl;
					m1[k]--;
				//	cout<<m1[k]<<endl;
					string f;
					f=f+t[i];
					
					//cout<<f<<endl;
					s.insert(j,f);
					//cout<<s<<endl;
					j++;
					//cout<<j<<endl;
				}
			}}
		}
		if(h==1)
		{
			cout<<"NO"<<endl;
		}
		else{
			if(s==t)
			{
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		
	}
}
