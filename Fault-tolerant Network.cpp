#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n];
		long long int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int x1,x2,x3,x4;
		
		vector<pair<long long int,int> > v3;
		vector<pair<long long int,int> > v4;
		vector<long long int> v1,v2;
		
		//if(a[0] and b[0] were connected
		vector<long long int > ans;
		long long int price;
		ans.push_back(abs(b[0]-a[0])+abs(b[n-1]-a[n-1]));
		ans.push_back(abs(b[n-1]-a[0])+abs(b[0]-a[n-1]));
		price=abs(a[0]-b[0]);
		for(int i=1;i<n-1;i++)
		{
			v1.push_back(abs(a[i]-b[n-1]));
		}
		sort(v1.begin(),v1.end());
		for(int i=1;i<n-1;i++)
		{
			v2.push_back(abs(b[i]-a[n-1]));
		}
		sort(v2.begin(),v2.end());
		price=price+v1[0]+v2[0];
		ans.push_back(price);
		price=0;
		v1.clear();
		v2.clear();
		price=price+abs(a[0]-b[n-1]);
		for(int i=1;i<n-1;i++)
		{
			v1.push_back(abs(a[i]-b[0]));
		}
		sort(v1.begin(),v1.end());
		for(int i=1;i<n-1;i++)
		{
			v2.push_back(abs(b[i]-a[n-1]));
		}
		sort(v2.begin(),v2.end());
		price=price+v1[0]+v2[0];
		ans.push_back(price);
		price=0;
		v1.clear();
		v2.clear();
		price=abs(a[n-1]-b[0]);
			for(int i=1;i<n-1;i++)
		{
			v1.push_back(abs(a[i]-b[n-1]));
		}
		sort(v1.begin(),v1.end());
		for(int i=1;i<n-1;i++)
		{
			v2.push_back(abs(b[i]-a[0]));
		}
		sort(v2.begin(),v2.end());
		price=price+v1[0]+v2[0];
		ans.push_back(price);
		price=0;
		v1.clear();
		v2.clear();
		price=abs(a[n-1]-b[n-1]);
			for(int i=1;i<n-1;i++)
		{
			v1.push_back(abs(a[i]-b[0]));
		}
		sort(v1.begin(),v1.end());
		for(int i=1;i<n-1;i++)
		{
			v2.push_back(abs(b[i]-a[0]));
		}
		sort(v2.begin(),v2.end());
		price=price+v1[0]+v2[0];
		ans.push_back(price);
		price=0;
		v1.clear();
		v2.clear();
		for(int i=1;i<n-1;i++)
		{
			v3.push_back({abs(a[0]-b[i]),i});
		}
		for(int i=1;i<n-1;i++)
		{
			v4.push_back({abs(a[n-1]-b[i]),i});
		}
		sort(v3.begin(),v3.end());
		sort(v4.begin(),v4.end());
		
		
			price=price+v3[0].first+v4[0].first;
		
		
		v3.clear();
		v4.clear();
			for(int i=1;i<n-1;i++)
		{
			v3.push_back({abs(b[0]-a[i]),i});
		}
		for(int i=1;i<n-1;i++)
		{
			v4.push_back({abs(b[n-1]-a[i]),i});
		}
		sort(v3.begin(),v3.end());
		sort(v4.begin(),v4.end());
		
		price=price+v3[0].first+v4[0].first;
		ans.push_back(price);
		v3.clear();
		v4.clear();
		price=price+abs(b[0]-a[0])+abs(b[0]-a[n-1]);
		for(int i=0;i<n;i++)
		{
			v1.push_back(abs(b[n-1]-a[i]));
		}
		sort(v1.begin(),v1.end());
		price=price+v1[0];
		v1.clear();
		ans.push_back(price);
		price=0;
		price=price+abs(b[n-1]-a[0])+abs(b[n-1]-a[n-1]);
		for(int i=0;i<n;i++)
		{
			v1.push_back(abs(b[0]-a[i]));
		}
		sort(v1.begin(),v1.end());
		price=price+v1[0];
		v1.clear();
		ans.push_back(price);
		price=0;
		price=price+abs(a[0]-b[0])+abs(a[0]-b[n-1]);
		for(int i=0;i<n;i++)
		{
			v1.push_back(abs(b[i]-a[n-1]));
		}
		sort(v1.begin(),v1.end());
		price=price+v1[0];
		ans.push_back(price);
		price=0;
		v1.clear();
		price=price+abs(b[0]-a[n-1])+abs(b[n-1]-a[n-1]);
		for(int i=0;i<n;i++)
		{
			v1.push_back(abs(b[i]-a[n-1]));
		}
		sort(v1.begin(),v1.end());
		price=price+v1[0];
		ans.push_back(price);
		price=0;
		
		sort(ans.begin(),ans.end());
		cout<<ans[0]<<endl;
	}
}

