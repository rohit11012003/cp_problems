#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cout<<"hello"<<endl;
	cin>>k;
	vector<int> v;
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		int h;
		cin>>h;
		v.push_back(h);
	}
	
	if(k>=n)
	{
		cout<<n<<endl;
	}
	
	else {
		for(int j=0;j<n;j++)
		{
			if(v[j]>k)
			{
			
				int count=0;
				for(int i=0;i<j;i++)
				{
					v.push_back(v[i]);
				}
				v.erase(v.begin(),v.begin()+j-1);
			for(int i=j+1;i<v.size();i++)
			{
				if(v[j]>v[i])
				{
					count=count+1;
				}
				else {
					
					break;
				}
			}
			if(count>=k)
			{
				cout<<v[j]<<endl;
				return 0;
			}
			else{
				j=0;
			}
			}
		}
	}
	return 0;
}
