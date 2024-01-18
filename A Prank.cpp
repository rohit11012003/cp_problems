#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t=0;
	int a[n];
	vector<int > v;
	vector<int> v1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		cout<<0<<endl;
	}
	else if(n==2)
	{
		if(a[1]==2||a[0]==999)
		{
			cout<<1<<endl;
		}
		else {
			cout<<0<<endl;
		}
	}
	else {
		for(int i=1;i<n-1;i++)
		{
			
			int k=0;
			for(int j=i;j<n-1;j++)
			{
				if(a[j-1]==a[j]-1&&a[j+1]==a[j]+1)
				{
					k++;
				}
				else {
					v1.push_back(k);
					i=j;
					break;
				}
				if(j==n-2)
				{
					//cout<<"REGSg"<<endl;
					v1.push_back(k);
					i=j;
					break;
				}
			}
		}
//		cout<<v1[0]<<endl;
//		cout<<"Rhy";
//		for(int i=0;i<v1.size();i++)
//		{
//			cout<<v1[i]<<" ";
//		}
//		cout<<"jeifj"<<endl;
		if(a[1]==2)
		{
			v1[0]++;
		}
		if(a[n-1]==1000&&a[n-2]==999)
		{
		//	cout<<"hello1"<<endl;
			v1[v1.size()-1]=v1[v1.size()-1]+1;
		}
	//	cout<<"YnYDTN"<<endl;
		sort(v1.begin(),v1.end());
		int z=v1[v1.size()-1];
		if(z==n)
		{
			cout<<n-1<<endl;
		}
		else{
			cout<<z<<endl;
		}
		
	}
	return 0;
}
