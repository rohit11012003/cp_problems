#include<bits/stdc++.h>
using namespace std;
int e=0;
vector<int> v;
void checkStr(char *str1,char *str2)
{
	int a=1;
	for(int i=0;i<=15;i++)
	{
		int t=0;
		for(int j=0;j<6;j++)
		{
			if(str2[j]!=str1[i+j])
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			a=0;
			cout<<i+1<<" ";
			v.push_back(i);
		}
	}
	if(a==1)
	{
		e=1;
		cout<<"NO Occurance"<<endl;
	}
}
void repStr(char *str1,char *str2,char *str3)
{
	if(e==1)
	{
		cout<<" Task Cannot be completed"<<endl;
	}
	else {
		cout<<endl;
		for(int i=0;i<v.size();i++)
		{
			int y=0;
			for(int j=v[i];j<v[i]+6;j++)
			{
				str1[j]=str3[y];
				y=y+1;
			}
		}
	}
	for(int i=0;i<20;i++)
	{
		cout<<str1[i];
	}
}
int main()
{
    char str1[20],str2[6],str3[6];
	for(int i=0;i<20;i++)
	{
		cin>>str1[i];
	}
	for(int i=0;i<6;i++)
	{
		cin>>str2[i];
	}
	for(int i=0;i<6;i++)
	{
		cin>>str3[i];
	}
	checkStr(str1,str2);
	repStr(str1,str2,str3);
	return 0;
}
