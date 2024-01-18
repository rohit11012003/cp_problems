#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	long long count=0;
	for(int i=0;i<n-1;i++)
	{
		if(s1[i]!=s2[i])
		{
			if(s1[i+1]!=s2[i+1]&&s1[i]!=s1[i+1])
			{
				count++;
				swap(s1[i],s1[i+1]);
				
			}
			else {
				count++;
			}
		}
	}
	if(s1[n-1]!=s2[n-1])
	{
		count++;
	}
	cout<<count<<endl;
	return 0;
}
