#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int A[3];
		int n;
		for(int i=0;i<3;i++)
		{
			cin>>A[i];
		}
		cin>>n;
		for(int i=0;i<2;i++)
		{
			for(int h=i+1;h<3;h++)
			{
				if(A[h]>A[i])
				{
					swap(A[i],A[h]);
				}
			}
		}
		int a=A[0]-A[2];
		int b=A[0]-A[1];
		n=n-a-b;
		if(n%3==0&&n>=0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		}
		return 0;
	}
	

