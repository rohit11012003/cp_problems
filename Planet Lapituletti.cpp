#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		string s2;
	int a,b,c,d;
	cin>>c>>d;
		cin>>s2;
		stringstream s_1,s_2;
		s_1<<s2[0];
		s_1<<s2[1];
		s_1>>a;
		s_2<<s2[3];
		s_2<<s2[4];
		s_2>>b;
		
//	cout<<a<<" "<<b<<" "<<c<<" "<<d;
//	cout<<endl;
int t=0;
int p=0;
for(int i=a;i<c;i++)
{
	
	if(p==1)
	{
		b=0;
	}
	for(int j=b;j<d;j++)
	{
//		cout<<i<<" "<<j<<endl;
		int x1,x2,y1,y2;
		x1=i%10;
		x2=i/10;
		y1=j%10;
		y2=j/10;
		if(x1==0||x1==1||x1==2||x1==5||x1==8)
		{
			if(x2==0||x2==1||x2==2||x2==5||x2==8)
			{
				if(y1==0||y1==1||y1==2||y1==5||y1==8)
				{
					if(y2==0||y2==1||y2==2||y2==5||y2==8)
					{
				//	cout<<i<<" "<<j<<endl;
					 vector<int> v;
					 v.push_back(x1);
					 v.push_back(x2);
					 v.push_back(y1);
					 v.push_back(y2);
					 for(int i=0;i<4;i++)
					 {
					 	if(v[i]==2)
					 	{
					 		v[i]=5;
						 }
						 else if(v[i]==5){
						 	v[i]=2;
						 }
					 }
					// cout<<10*v[1]+v[0]<<" "<<10*v[3]+v[2]<<endl;
					 if(((10*v[2])+v[3])<c&&((10*v[0])+v[1])<d)
					 {
					 	//cout<<"hello"<<endl;
					 	t=1;
					 	cout<<x2<<x1<<":"<<y2<<y1<<endl;
					 	break;
					 }
					 
					}
				}
			}
		}
	}
	p=1;	if(t==1)
	{
		break;
	}
}
if(t==0)
{
	cout<<"00:00"<<endl;
}
	}
	return 0;
}
