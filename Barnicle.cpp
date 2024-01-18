#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int po;
	string g;
	int t;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='e')
		{
			t=i;
			break;
		}
		else if(s[i]=='.')
		{
			po=i;
		}
		else{
			g=g+s[i];
		}
	}
	string k;
	k.append(100,'0');
	g=g+k;
	int j;
	string g1;
	for(int i=t+1;i<s.size();i++)
	{
		g1=g1+s[i];
	}
	stringstream str;
	str<<g1;
	str>>j;
	po=po+j;
	string x1=g.substr(0,po);
	string x2=g.substr(po,g.size()-po);
	string x3=".";
	string ans=x1+x3+x2;
	for(int i=0;i<ans.size()-1;i++)
	{
		if(ans[i]=='0'&&ans[i+1]!='.')
		{
			ans.erase(ans.begin()+i);
			i--;
		}
		else {
			break;
		}
	}
	for(int i=ans.size()-1;i>=0;i--)
	{
		if(ans[i]=='0')
		{
			ans.erase(ans.begin()+i);
			
		}
		else if(ans[i]=='.')
		{
			ans.erase(ans.begin()+i);
			break;
		}
		else {
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
	
}
