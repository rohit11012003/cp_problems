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
		vector<long long int> v;
		for(int i=0;i<n;i++)
		{
			long long int a;
			cin>>a;
			v.push_back(a);
		}
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else {
			
				sort(v.begin(),v.end());
		int z=0;
		//cout<<v.size()<<endl;
		long long int k1=v.size();
		int z2=0;
		while(v.size()>1&&z<n-1)
		{
			for(int i=0;i<v.size()-1;i++)
			{
				if(v[i]==v[i+1]||v[i]==v[i+1]-1)
				{
					long long int h=v[i]+v[i+1];
					z++;
					v[i+1]=h;
					v.erase(v.begin()+i);
					i--;
				}
			}
			if(v.size()==k1)
			{
			//	cout<<v.size()<<" "<<k1<<endl;;
				z2=1;
				break;
			}
			else{
			//
			sort(v.begin(),v.end());
				k1=v.size();
			}
		}
		if(z2==1)
		{
			cout<<"NO_1"<<endl;
		}
		else{
			
		
		if(v.size()==1&&z!=n-1)
		{
			cout<<"NO_2"<<endl;
		}
		else if(v.size()>1&&z==n-1)
		{
			cout<<"NO_3"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}}
		
	}}
	return 0;
}
