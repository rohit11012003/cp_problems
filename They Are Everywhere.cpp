#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	unordered_map<int, int> m,m1;
	vector<int> v[125];
	for(int i=0;i<n;i++)
	{
		int j=s[i];
		v[j].push_back(i);
	}
	vector<vector<int> > v1;
	int count=0;
	for(int i=0;i<125;i++)
	{
		if(v[i].size()!=0)
		{
			v1.push_back(v[i]);
			count++;
		}
	}
	//cout<<"hello";
	int ind;
	for(int i=0;i<v1.size();i++)
	{
		//cout<<v1[i][v1[i].size()-1]<<endl;
		if(i==0)
		{
			ind=v1[i][v1[i].size()-1];
		}
		else{
			if(v1[i][v1[i].size()-1]<ind)
			{
				ind=v1[i][v1[i].size()-1];
			}
		}
	}

	int ans;
	int ans1;
//	cout<<ind<<endl;
	for(int i=ind;i<n;i++)
	{
		int j=s[i];
		m[j]=m[j]+1;
		
		if(m.size()==count)
		{
			ans=i-ind+1;
			break;
		}
	}
	//cout<<" count is "<<count<<endl;

	int ind1;
	for(int i=0;i<v1.size();i++)
	{
		if(i==0)
		{
			ind1=v1[i][0];
		}
		else{
			if(v1[i][0]>ind1)
			{
				ind1=v1[i][0];
			}
		}
	}
//	cout<<"ind1 is"<<ind1<<endl;
	for(int i=ind1;i>=0;i--)
	{
		int j=s[i];
		m1[j]=m1[j]+1;
	
		if(m1.size()==count)
		{
			ans1=ind1-i+1;
			break;
		}
	}
	//cout<<"ans1 is "<<ans1<<endl;
	cout<<min(ans,ans1)<<endl;
	
}
