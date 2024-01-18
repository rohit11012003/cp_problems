#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int> > A;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		vector<int> b;
		for(int j=0;j<m;j++)
		{
			int c;
			cin>>c;
			b.push_back(c);
		}
		A.push_back(b);
		
	}
	
    int ans[n][m];
    ans[n-1][m-1]=A[n-1][m-1];
    int sum1=A[n-1][m-1];
    int sum2=A[n-1][m-1];
    for(int i=n-2;i>=0;i--)
    {
        sum1=sum1+A[i][m-1];
        ans[i][m-1]=sum1;
    }
    for(int j=m-2;j>=0;j--)
    {
        sum2=sum2+A[n-1][j];
        ans[n-1][j]=sum2;
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            ans[i][j]=ans[i+1][j]+ans[i][j+1]-ans[i+1][j+1]+A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
    vector<long long int > v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v.push_back(ans[i][j]);
        }
    }
}
