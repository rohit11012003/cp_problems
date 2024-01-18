#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char A[n];
        char B[n];
        for(int j=0;j<n;j++)
        {
        	cin>>A[j];
		}
		for(int j=0;j<n;j++)
        {
        	cin>>B[j];
		}
		for(int j=0;j<n;j++)
		{
			if(A[j]=='1'&&B[j]=='1')
			{
				cout<<"NO"<<endl;
				break;
			}
			if(j==(n-1))
			{
				cout<<"YES"<<endl;
			}
		}
		


     }
    return 0;
}
