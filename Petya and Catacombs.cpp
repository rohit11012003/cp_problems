#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	unordered_map<int,int> m;
	m[0]=1;
	int count;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
	int c=m[a];
		if(c==0)
		{
			m[a]=i;
			count++;
		}
		else{
			m[a]=i;
		}
	}
	cout<<count+1<<endl;
	return 0;
}
