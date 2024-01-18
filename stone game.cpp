#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int h=0;h<t;h++)
	{
		int n;
		cin>>n;
		int A[n];
		int a=0;
		int b=0;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
			
		}
		for(int i=0;i<n;i++)
		{
			if(i>0)
		 {
				if(A[i]>A[a])
				{
					a=i;			
				}
				else if(A[i]<A[b])
				{
					b=i;
				}
			}
		}
		a=a+1;
		b=b+1;
		int e=min(a,b);
		a=max(a,b);
		b=e;
	int r=min(a,n+1-b);
	int u=min(b+(n+1-a),r);
	cout<<u<<endl;
	}
		return 0;
	}
	
	

