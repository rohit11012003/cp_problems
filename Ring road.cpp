#include<bits/stdc++.h>
using namespace std;
const int N=105;
int cl[N];
int cu[N];
for(int i=0;i<N;i++)
{
	cl[i]=-1;
	cu[i]=-1;
}
 int main()
 {
 	int n;
 	cin>>n;
 	vector<pair<int, int > > v;
 	int pri[n];
 	for(int i=0;i<n;i++)
 	{
 		int a,b,c;
 		cin>>a>>b>>c;
 		v.push_back({a,b});
 		pri[i]=c;
	 }
	 //clockwise 
	 for(int i=0;i<n;i++)
	 {
	 	int a,b;
	 	a=v[i].first;
	 	b=v[i].second;
	 	
	 }
 }
