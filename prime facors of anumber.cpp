#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	//calculating prime factors of an number
	//the smallest divisor of an number will always be an prime
//	for(int i=2;i<=n;i++)
//	{
//		while(n%i==0)
//		{
//			cout<<i<<" ";
//			n/=i;
//		}
//	}
	//time complexity of this method is O(n)
	//there is a theorm that implies that if a number is compoite then there exist alteast a divisor of that number till sqrt(n)
	for(int i=2;i*i<=n;i++)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1)
	{
		cout<<n<<endl;
	}
	return 0;
}
