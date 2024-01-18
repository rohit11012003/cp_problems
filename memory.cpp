#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
int prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int check(string s)
{
	
}

int main()
{
//	int t;
//	cin>>t;
//	 int A[t];
//	for(int i=0;i<t;i++)
//	{
//		cin>>A[i];
//	}
//	for(int i=0;i<t;i++)
//	{
//	ostringstream str1;
//	str1<<A[i];
//	string geek=str1.str();
//	cout<<check(geek);
//	
//    }
    int a=37;
    cout<<prime(a)<<endl;
	
	return 0;
}
