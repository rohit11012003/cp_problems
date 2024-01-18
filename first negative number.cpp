#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	queue<int> q;
	int j=0;
	int i=0;
	int k;
	cin>>k;
	vector<int> ans;
	vector<int> v;
	while(j!=n)
	{
		if(j<i+k-1)
		{
			if(a[j]<0)
			{
				q.push(a[j]);
			}
			j++;
		}
		else {
			if(a[j]<0)
			{
				q.push(a[j]);
				
			}
			if(q.size()==0)
			{
				v.push_back(0);
				i++;
			}
			else{
				v.push_back(q.front());
				if(q.front()==a[i])
			{
				q.pop();
			}
			i++;
			j++;
			}
			
		}
		
		
		
	}
	for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
}
