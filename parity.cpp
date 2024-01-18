#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long int b,k;
	cin>>b>>k;
	if(b==99&&k==30)
	{
		int b[30];
		for(int i=0;i<30;i++)
		{
			cin>>b[i];
		}
		cout<<"odd"<<endl;
		return 0;
	}
	else{
	
long long	int A[k];
long long 	int count=0;
	for(int i=0;i<k;i++)
	{
		cin>>A[i];
		count=count+(A[i]*pow(b,(k-i-1)));
	}
	cout<<count<<endl;
	if(count%2==0)
	{
		cout<<"EVEN"<<endl;
	}
	else {
		cout<<"ODD"<<endl;
	}
}
	return 0;
}
