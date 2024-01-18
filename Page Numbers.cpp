#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=',')
		{
			string f;
			int k=i;
			while(s[k]!=',')
			{
				f=f+s[k];
				k++;if(k>=n)
				{
					break;
				}
				
			}
			i=k-1;
			stringstream str;
			str<<f;
			int h;
			str>>h;
			v.push_back(h);
			if(k>=n)
			{
				break;
			}
		}
	}
	sort(v.begin(),v.end());
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
	//cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		int k=v[i];

		if(i<(v.size()-1))
		{
		
			for(int j=i+1;j<v.size();j++)
			{
				if(v[j]==k)
				{
				
					v.erase(v.begin()+j);
					j--;
				}
				
			}
		}
	}
	int t=0;
	for(int i=0;i<v.size()-1;i++)
	{
		int k=1;
		int l=i;
		for(int j=i+1;j<v.size();j++)
		{
			if(v[j]==v[i]+k)
			{
				k++;
			}
			else{
				
				
					i=j-1;
				
				
			//	cout<<i<<" "<<j<<endl;
				break;
			}
			if(j==v.size()-1)
			{
				i=v.size()-2;
			}
			
		}
		if(k<2)
			{
				cout<<v[l]<<",";
			}
			else{
				cout<<v[l]<<"-";
				if(l+k-1==v.size()-1)
				{
					cout<<v[l+k-1];
					t=1;
				}
				else{
					cout<<v[l+k-1]<<",";
				}
			}
		
	}
	if(t==0)
	{
		cout<<v[v.size()-1];
		cout<<endl;
	}
	return 0;
}
