#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n;
		cin>>n;
		vector <int> v;
		if(n%2!=0)
		{
			for(int i=0;i<n;i++)
			{
				if(i==0)
				{
					v.push_back(7);
				}
				else {
					v.push_back(1);
				}
			}
		}
		else {
			for(int i=0;i<n;i++)
			{
				v.push_back(1);
			}
		}
		for(int i=0;i<n/2;i++)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
	return 0;
}
