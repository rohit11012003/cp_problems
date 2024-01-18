#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		int A[n];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			count=count+A[i];
		}
		if(count%2!=0)
		{
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
