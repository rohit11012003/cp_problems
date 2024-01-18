#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<long long int >v1;
	
	for(long long int i=2;i<1000000000;i++)
	{
		vector<long long int >v2;
		v2.push_back(1);
		long long int b=i;
		long long int a=2;
		while(b!=1)
		{
			if(b%a==0)
		{
			if(a!=v2[v2.size()-1])
			{
				v2.push_back(a);
			}
			b=b/a;
		}
		else{
			a++;
		}
		}
		cout<<v2.size()<<" ";
		v1.push_back(v2.size());
	}
	sort(v1.begin(),v1.end());
	cout<<v1[v1.size()-1]<<endl;
	return 0;
	
}
