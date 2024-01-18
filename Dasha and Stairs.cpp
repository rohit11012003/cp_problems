#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	 cin>>a>>b;
	 int x=abs(a-b);
	 if(a==0&&b==0)
	 {
	 	cout<<"NO"<<endl;
	 }
	 else if(x>=2)
	 {
	 	cout<<"NO"<<endl;
	 }
	 else {
	 	cout<<"YES"<<endl;
	 }
	 return 0;
}
