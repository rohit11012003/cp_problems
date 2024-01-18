#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> v;
	int z=10;
	long long int sum=1;
	long long int t=0;
	for(long long int i=0;i<s.size();i++)
	{
		/*stringstream str;
		str<<s[i];
		int x;
		str>>x;*/
		int x=s[i];
		if(s[i]=='?')
		{
			if(i==0)
			{
				sum=sum*9;
			}
			else{
				sum=sum*10;
			}
			t++;
		}
		else if(x>=48&&x<=57)
		{
			continue;
		}
		else{
			if(s[i]!='?')
			{
			
			int h=0;
		for(int j=0;j<v.size();j++)
		{
			if(x==v[j])
			{
				
				h=1;
				
				break;
			}
			
		}
		if(h==0)
			{
				
				if(i==0)
				{
					sum=sum*9;
					z=z-1;
				}
				else{
					sum=sum*z;
					z=z-1;
				}
				v.push_back(x);
			}
		}}
	
		
	}
	cout<<sum<<endl;
	return 0;

}
