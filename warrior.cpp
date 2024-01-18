#include<iostream>
using namespace std;
int kills(int x, int arr[],int j)
{
	int k=0;
	
	int i=0;
	while(i<j)
	{
		
		if(x>arr[i])
		{
			x=2*(x-arr[i]);
			k++;
			i++;
		}
		else if(x<=arr[i])
		{
			return k;
		}
	}
	return k;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int N,Q;
		cin>>N>>Q;
		int en[N];
		for(int j=0;j<N;j++)
		{
			cin>>en[j];
		}
		for(int p = 0; p< N ;p++)
      {int j = p;
       while(j > 0 && (en[j] < en[j-1]))
         {swap(en[j-1], en[j]);
           j = j-1;
         }
      }
      
		for(int j=0;j<Q;j++)
		{
			int x;
			cin>>x;
			cout<<kills(x,en,N)<<endl;
		}
      

	}
	return 0;
}
