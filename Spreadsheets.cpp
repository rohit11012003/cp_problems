#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int ind1;
		for(int i=0;i<s.size();i++)
		{
			int j=s[i];
			if(j<'A'||j>'Z')
			{
				ind1=i;
				break;
			}
		}
		int t=1;
		for(int i=ind1;i<s.size();i++)
		{
			int j=s[i];
			if(j>='A'&&j<='Z')
			{
			t=0;
			break;	
			}
		}
		
			
		if(t==0)
		{
		
		int r1;
		string s1;
		int ind;
		for(int i=1;i<s.size();i++)
		{
			if(s[i]=='C')
			{
				ind=i;
				break;
			}
			else{
				s1=s1+s[i];
			}
		}
		stringstream str;
		str<<s1;
		str>>r1;
		s1.clear();
		for(int i=ind+1;i<s.size();i++)
		{
			s1+=s[i];
		}
		stringstream st;
		st<<s1;
		int c;
		st>>c;
		int q=c/26;
		vector<char> v;
		int r=c%26;
		if(r==0)
		{
			v.push_back('Z');
		}
		else{
			int j=r+'A'-1;
			char g=j;
			v.push_back(g);
		}
		if(r==0)
		{
			q=q-1;
		}
		while(q!=0)
		{
			//cout<<q<<endl;
			 int q1=q/26;
			 
			r=q%26;
			//cout<<r<<endl;
			if(r==0)
		{
			v.push_back('Z');
		}
		else{
			int j=r+'A'-1;
			
			char g=j;
			v.push_back(g);
		}
		q=q1;
		if(r==0)
		{
			q--;
		}
		}
		reverse(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
		cout<<r1<<endl;}
		else{
		//	cout<<"second"<<endl;
			int ind;
			string s1;
			for(int i=0;i<s.size();i++)
			{
				int j=s[i];
				//cout<<"j is "<<j<<endl;
				if(j<'A'||j>'Z')
				{
					ind=i;
					break;
				}
				s1+=s[i];
			}
		//	cout<<ind<<endl;
			string s2;
			for(int i=ind;i<s.size();i++)
			{
				s2+=s[i];
			}
			stringstream str;
			str<<s2;
			int r;
			str>>r;
			//cout<<r<<endl;
			int c=0;
			
			int f=s1.size()-1;
		//	cout<<f<<endl;
			for(int i=0;i<s1.size();i++)
			{
				int j=s[f-i]-'A'+1;
				//cout<<j<<endl;
				c=c+j*(pow(26,i));
			}
			cout<<"R"<<r<<"C"<<c<<endl;
		}
	}
}
