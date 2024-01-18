#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int n=s.size();
	if(n%2!=0)
	{
		cout<<"First"<<endl;
	}
	else {
	
		vector<pair<int,int> >v;
        for(int i=0;i<s.size();i++)
		{int t=0;
			int k=s[i];
			for(int j=0;j<v.size();j++)
			{
				if(v[j].first==k)
				{
					v[j].second=v[j].second+1;
					t=1;
				}
			}
			if(t==0)
			{
				v.push_back(make_pair(k,1));
			}
		}
	
		int ch=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].second%2!=0)
			{
				ch=1;
				break;
			}
		}
		if(ch==0)
		{
			cout<<"First"<<endl;
		}
		else {
			cout<<"Second"<<endl;
		}
	}
	return 0;
	
	
}
