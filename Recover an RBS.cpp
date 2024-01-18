#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.size();
		int count1[n];
		int count2[n];
		vector<int> v;
		int a=0;
		int b=0;
		for(int i=0;i<n;i++)
		{
			if(i==0&&s[i]=='?')
			{
				s[i]='(';
			}
			else if(i==n-1&&s[i]=='?')
			{
				s[i]=')';
			}
			if(s[i]==')')
			{
				b++;
			}
			else if(s[i]=='(')
			{
				a++;
			}
			else if(s[i]=='?')
			{
				v.push_back(i);
			}
			count1[i]=a;
			count2[i]=b;
		}
		//cout<<"value of a and b is "<<a<<" "<<b<<endl;
		if(n==2)
		{
		//	cout<<"hello1"<<endl;
			cout<<"YES"<<endl;
		}
		else {
			if(count1[n-1]==count2[n-1]+v.size())
			{
				//cout<<"hello2"<<endl;
				cout<<"YES"<<endl;
			}
			else{
				if(v.size()==1)
				{
				//	cout<<"HELLO3"<<endl;
					cout<<"YES"<<endl;
				}
				else if(v.size()==2)
				{
				//	cout<<"Hello5"<<endl;
					if(v[0]==0&&v[1]==1)
					{
						cout<<"YES"<<endl;
					}
					else if(v[0]==n-2&&v[1]==n-1)
					{
						cout<<"YES"<<endl;
					}
					else{
							int z=0;
					for(int i=1;i<v.size();i++)
					{
						if(count2[v[i]]!=count1[v[i]]+i&&count1[v[i-1]]!=count2[v[i-1]])
						{
							z=1;
							break;
						}
					}
					if(z==0)
					{
						//cout<<"gerd";
						cout<<"YES"<<endl;
					}
					else{
						//cout<<"Hd";
						cout<<"NO"<<endl;
					}
					}
				}
			
				else{
					int z=0;
					for(int i=1;i<v.size();i++)
					{
						if(count2[v[i]]!=count1[v[i]]+i)
						{
							z=1;
							break;
						}
					}
					if(z==0)
					{
					//	cout<<"gerd";
						cout<<"YES"<<endl;
					}
					else{
						cout<<"NO"<<endl;
					}
				}
			}
		}
		
	}
}
