#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,k;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    do
	    {
	        k+=n%10;
	        n=n/10;
	    }
	    while(n/10>0);
	    cout<<k+(n%10)<<endl;
	    k=0;
	}
	
	return 0;
}
