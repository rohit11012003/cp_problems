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
	vector<int> max;
	int h=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			h=1;
			int ze=1;
			int on=0;
			int t=i+1;
			max.push_back(1);
			while(ze>on&&t<n)
			{
				if(a[t]==0)
				{
					ze=ze+1;
				}
				else if(a[t]==1)
				{
					on++;
				}
				t++;
			max.push_back(ze-on);	
			}
			
		}
	}
	if(h==0)
	{
		max.push_back(-1);
	}
	if(max.size()==0)
	{
		max.push_back(1);
	}
	sort(max.begin(),max.end(),greater<int>());
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			t++;
		}
	}
	cout<<max[0]+t<<endl;
	return 0;
}
