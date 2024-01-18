#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		stringstream str;
		str<<s[i];
		int t;
		str>>t;
		a.push_back(t);
		
	}
	int k=1;
	if(n%2==0)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
			if(k%2==0&&k<n)
			{
				cout<<"-";
			}
			k++;
		}
	}
	else if(n%3==0)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
			if(k%3==0&&k<n)
			{
				cout<<"-";
			}
			k++;
		}
	}
	else {
		for(int i=0;i<n;i++)
		{
	        cout<<a[i];
			if(k%3==0&&k<n)
			{
				cout<<"-";
				if(n-k==4)
				{
					for(int j=i+1;j<n;j++)
					{
						cout<<a[j];
						if(k%2==0&&j<n-1)
						{
							cout<<"-";
						}
						k++;
					}
					return  0;
				}
			}
			k++;
		}
		}
	}

