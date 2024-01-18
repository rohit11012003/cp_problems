#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int t=0;
	for(int i=0;i<6;i++)
{
		int a;
		cin>>a;
		v.push_back(a);
}
sort(v.begin(),v.end());
int max;
int ind;
for(int i=0;i<5;i++)
{
	int t=0;
	for(int j=i;j<6;j++)
	{
		if(v[i]==v[j])
		{
			t=t+1;
		}
	}
	if(i==0)
	{
		max=t;
		ind =i;
	}
	else {
		if(t>max)
		{
			max=t;
			ind =i;
		}
	}
	
}
if(max<4)
{
	cout<<"Alien"<<endl;
}
else {
	if(max==5)
	{
		cout<<"Bear"<<endl;
	}
	else if(max==4)
	{
		if(ind==0)
		{
			if(v[4]!=v[5])
			{
				cout<<"Bear"<<endl;
			}
				else{
				cout<<"Elephant"<<endl;
			}
			}
			else if(ind==1)
			{
				cout<<"Bear"<<endl;
			}
			else if(ind==2)
			{
				if(v[0]!=v[1])
				{
					cout<<"Bear"<<endl;
				}
					else{
				cout<<"Elephant"<<endl;
			}
			}
		}
		else if(max==6)
		{
			cout<<"Elephant"<<endl;
		}
	return 0;
	
}


}
