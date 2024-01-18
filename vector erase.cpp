#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	for(int i=0;i<5;i++)
	{
		int d;cin>>d;
		a.push_back(d);
	}
	a.erase(a.begin()+2);
	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
