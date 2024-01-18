#include<bits/stdc++.h>
using namespace std;
void print(string a)
{
	cout<<a<<" ";
}
int fun(string digits,vector<string> passwords)
	{
		vector<int> v;
		for(int i=0;i<10;i++)
		{
			v.push_back(0);
		}
		for(int i=0;i<digits.size();i++)
		{
			stringstream str;
			str<<digits[i];
			int j;
			str>>j;
			v[j]=v[j]+1;
		}
		
		vector<int> v2=v;
		
		int count=0;
		for(int i=0;i<passwords.size();i++)
		{
			string s;
			
			s=passwords[i];
			print(s);
			int p=0;
			for(int j=0;j<s.size();j++)
			{
				stringstream str1;
				str1<<s[j];
				int l;
				str1>>l;
			
				v[l]=v[l]-1;
				if(v[l]<0)
				{
					p=1;
					break;
				}
			}
			if(p==0)
			{
				count++;
			}
			v=v2;
			
		}
		return count;
		
	}
int main()
{
	cout<<35280%108;
	//cout<<count%108;
}
