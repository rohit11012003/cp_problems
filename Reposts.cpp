#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<int> v[1000];
int height[1000];
void dfs(int vertex,int par=0)
{
	for(auto child : v[vertex])
	{
		if(child==par) continue;
		height[child]=height[vertex]+1;
		dfs(child,vertex);
	}
}
int main()
{
	int n;
	cin>>n;
	map<string,int> m;
    string z="Polycarp";
    m[z]=m[z]+1;
    for(int p=0;p<n;p++)
	{
		string s;
		getline(cin, s);
		//cin>>s;
		cout<<"value of s is"<<s<<endl;
		string s1;
		string s2;
		int j;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				j=i;
				break;
			}
			s1=s1+s[i];
		}
		for(int i=j+1;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				j=i;
				break;
			}
		}
		for(int i=j+1;i<s.size();i++)
		{
			s2=s2+s[i];
			
		}
		cout<<"string 1 and 2 are following "<<s1<<" "<<s2<<endl;
		m[s1]=m.size()+1;
		cout<<"value of s1 and s2 are"<<m[s1]<<" "<<m[s2]<<endl;
		v[m[s1]].push_back(m[s2]);
		v[m[s2]].push_back(m[s1]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	dfs(1);
	int h_max=0;
	for(int i=1;i<=n;i++)
	{
		cout<<height[i]<<" ";
		if(height[i]>h_max)
		{
			h_max=height[i];
		}
	}
	cout<<h_max<<endl;
	return 0;
}
