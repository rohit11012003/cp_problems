#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	cout<<"FWEf";
	vector<vector<int> > v;
	for(int i=0;i<pow(2,n);i++)
	{
	vector<int> h;
	for(int j=n-1;j>=0;j--)
	{
		h.push_back((i>>j)&1);
	}
//	for(int f=0;f<h.size();f++)
//	{
//		cout<<h[f]<<" ";
//	}
//	cout<<endl;
	v.push_back(h);
}
//cout<<"hello";
int t=0;
for(int i=0;i<v.size();i++)
{
	long long int count=0;
	for(int j=0;j<n;j++)
	{
		if(v[i][j]==1)
		{
			count=count+a[j];
		}
		else{
			count=count-a[j];
		}
	}
	count=abs(count);
	if((count%360)==0)
	{
		t=1;
		break;
	}
}
if(t==0)
{
	cout<<"NO"<<endl;
}
else if(t==1)
{
	cout<<"YES"<<endl;
}
return 0;
}
