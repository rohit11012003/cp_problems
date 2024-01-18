#include<bits/stdc++.h>
using namespace std;
int main()
{
	//let count be the number of divisors and sum be the sum of all the divisors
	int count=0;
	long long int sum=0;
	int n;
	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			count++;
//			sum+=i;
//			cout<<i<<endl;
//		}
//	}
//	cout<<sum<<" "<<count<<endl;
	//the time complexity of this method is O(n);
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			sum+=i;
			if(i!=n/i)
			{
				count++;
				sum+=n/i;
			}
		}
	}
	cout<<count<<" "<<sum<<endl;
	//time complexity ofn nthis method is O(squrt(n))
	//but we find the number of divisors and their sum in time complexity of O(1) if we know the prime fsctoriation of that number
	//the number be is of the form n=p1^t1*p2^t2*p3^t3......
	//the number of divisios will be (t1+1)*(t2+1)*(t3+1).....
	//and the sum of their divisors will be ((p1^(t1+1)-1)/p1-1)*((p2^(t2+1)-1)/p2-1)*((p3^(t3+1)-1)/p3-1).....
	
	
}
