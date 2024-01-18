#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> v[N];
int num[N];
void fun(int ind, int par)
{
	for(auto child : v[ind])
	{
		if(child==par) continue;
		fun(child, ind);
		num[ind]=num[ind]+num[child]+1;
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	fun(1,0);
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		if(num[i]==0) continue;
		if((num[i]+1)%2==0&&(n-num[i]-1)%2==0)
		{
			ans++;
		}
	}
	if(n%2!=0&&ans==0)
	{
		cout<<-1<<endl;
	}
	else {
		cout<<ans<<endl;
	}

}
