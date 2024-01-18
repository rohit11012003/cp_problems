#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<pair<int,int > > v;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		v.push_back({a[i],i});
	}
	if(n==1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	sort(v.begin(),v.end());
	vector<pair<int,int> > v1;
	int t=0;
	for(int i=0;i<n;i++)
	{
	//	cout<<"hello";
		int h=v[i].first;
		int count=0;
		for(int j=i;j<n;j++)
		{
			if(h==v[j].first)
			{
				count++;
			}
			else{
				v1.push_back({count,i});
				i=j-1;
				
				break;
			}
			if(j==n-1)
			{
				v1.push_back({count,i});
				t=1;
			}
			
		}
		if(t==1)
		{
		break;		
		}
		
	}

	sort(v1.begin(),v1.end());
	int ze=v1[v1.size()-1].first;
	int fe;
	if(v1.size()==1)
	{
		fe=0;
	}
	else
	{
		
	
	 fe=v1[v1.size()-2].first;}
	if(ze<=2&&fe<=1)
	{
		cout<<"NO"<<endl;
		return  0;
	}
	else{
		cout<<"YES"<<endl;
		if(ze>=3)
		{
			for(int i=0;i<n;i++)
			
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
			swap(v[v1[v1.size()-1].second],v[v1[v1.size()-1].second+1]);
			for(int i=0;i<n;i++)
			
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
			swap(v[v1[v1.size()-1].second+1],v[v1[v1.size()-1].second+2]);
			for(int i=0;i<n;i++)
			
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
		}
		else if(ze==2&&fe==2)
		{
			for(int i=0;i<n;i++)
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
			swap(v[v1[v1.size()-1].second],v[v1[v1.size()-1].second+1]);
			for(int i=0;i<n;i++)
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
			swap(v[v1[v1.size()-2].second],v[v1[v1.size()-2].second+1]);
			for(int i=0;i<n;i++)
			{
				cout<<v[i].second+1<<" ";
			}
			cout<<endl;
		}
	}
	
	return  0;
}
