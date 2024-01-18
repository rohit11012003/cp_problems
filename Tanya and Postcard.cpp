#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	map<int,int> m1;
	map<int,int> m2;
//	for(int i=0;i<s.size();i++)
//	{
//		int k=s[i];
//		m1[k]=m1[k]+1;
//	}
	for(int i=0;i<t.size();i++)
	{
		int k=t[i];
		m2[k]=m2[k]+1;
	}
	int a=0;
	int b=0;
	for(int i=0;i<s.size();i++)
	{
		int k=s[i];
		if(m2[k]>0)
		{
			a++;
			m2[k]--;
			s.erase(s.begin()+i);
			i--;
		}
	
	}
	for(int i=0;i<s.size();i++)
	{
		int k=s[i];
		if(m2[k]>0)
		{
			a++;
			m2[k]--;
			s.erase(s.begin()+i);
			i--;
		}
		else{
			if(k>=97)
			{
				k=k-32;
				if(m2[k]>0)
				{
					m2[k]--;
					b++;
				}
			}
			else {
				k=k+32;
				if(m2[k]>0)
				{
					m2[k]--;
					b++;
				}
			}
		}
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
