#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int x=0;
		int y=0;
		long long int count=0;
		vector<int> v1;
		vector<int> v2;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			if(a>0)
			{
				v1.push_back(a);
			}
			else if(a<0)
			{
				v2.push_back(a);
			}
		}
		if(v1.size()!=0)
		{
			x=1;
		}
		if(v2.size()!=0)
		{
			y=1;
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),greater<int>());
		if(x==1&&y==1)
		{
			
		
		if(v1[v1.size()-1]>abs(v2[v2.size()-1]))
		{
			for(int i=k-1;i<v2.size();i=i+k)
			{
				count=count+2*abs(v2[i]);
				if(i+k>v2.size()&&i!=v2.size()-1)
				{
					count=count+2*abs(v2[v2.size()-1]);
					break;
				}
			}
			for(int i=k-1;i<v1.size();i=i+k)
			{
				count=count+2*abs(v1[i]);
				if(i+k>=v1.size()&&i!=v1.size()-1)
				{
					count=count+abs(v1[v1.size()-1]);
				}
			}
		}
		else{
			for(int i=k-1;i<v1.size();i=i+k)
			{
				count=count+2*abs(v2[i]);
				if(i+k>v1.size()&&i!=v1.size()-1)
				{
					count=count+2*abs(v1[v1.size()-1]);
					break;
				}
			}
			for(int i=k-1;i<v2.size();i=i+k)
			{
				count=count+2*abs(v2[i]);
				if(i+k>=v2.size()&&i!=v2.size()-1)
				{
					count=count+abs(v2[v2.size()-1]);
				}
			}
		}}
		else if(x==1&&y==0)
		{
		//cout<<"hello1"<<endl;
			for(int i=k-1;i<v1.size();i=i+k)
			{
                //count=count+2*abs(v1[i]);
				if(i+k>=v1.size()-1-k)
				{//cout<<"FYFt";
					count=count+2*v1[v1.size()-1-k];
					count=count+v1[v1.size()-k];
					break;
				}
				count=count+2*abs(v1[i]);
			}
		}
		else if(x==0&&y==1)
		{//cout<<"rfs";
			for(int i=k-1;i<v2.size();i=i+k)
			{
				count=count+2*abs(v2[i]);
				if(i+k>=v2.size()-1&&i!=v2.size()-1)
				{
					count=count+abs(v2[v2.size()-1]);
					break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
