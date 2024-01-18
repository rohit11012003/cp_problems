#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	vector<long long int> v1,v2;
	for(long long int i=0;i<n;i++)
	{
		long long int a;
		cin>>a;
		v1.push_back(a);
	}
	v2=v1;
	sort(v2.begin(),v2.end());
	int t=0;
	long long int l,r;
	for(int i=0;i<n;i++)
	{
		
		if(v1[i]!=v2[i])
		{
			l=i;
		//	cout<<"vlaue of i  is "<<i<<endl;
			t=1;
			
			while(v1[i+1]<v1[i])
			{
				if(i+1==n-1)
				{
					i++;
					break;
				}
				i++;
				
			}
			r=i;
		}
	}
	if(t==0)
	{
		cout<<"yes"<<endl;
		cout<<1<<" "<<1<<endl;
	}
	else{
	//	cout<<l<<" "<<r<<endl;
		long long int l1=l;
		long long int r1=r;
		if((r-l)%2==0)
		{
			while(l!=r)
			{
				swap(v1[l],v1[r]);
				l++;
				r--;
			}
		}
		else{
			while(r+1!=l)
			{
				swap(v1[l],v1[r]);
				l++;
				r--;
			}
		}
		int u=0;
		for(int i=0;i<n-1;i++)
		{
			if(v1[i+1]<v1[i])
			{
				u=1;
				break;
			}
		}
		if(u==0)
		{
			cout<<"yes"<<endl;
			cout<<l1+1<<" "<<r1+1<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
