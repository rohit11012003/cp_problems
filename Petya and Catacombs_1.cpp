#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	unordered_map<int,int> m;
	m[0]=1;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		if(m[a]==0)
		{
			count++;
			m[i]=1;
		}
		else{
			m.erase(a);
			m[i]=1;
		}
	}
	cout<<count+1<<endl;
	return 0;
}
