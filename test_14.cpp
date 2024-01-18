#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int count=0;
	for(int i=1;i<=13;i++)
	{
		int re=15-i;
		for(int j=1;j<re-1;j++)
		{
			count++;
			if(j!=re-j)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
}
