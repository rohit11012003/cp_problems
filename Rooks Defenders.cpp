#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	unordered_map<int,int> m1;
	unordered_map<int,int> m2;
	for(int yu=0;yu<q;yu++)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			int x,y;
			cin>>x>>y;
			m1[x]=m1[x]+1;
			m2[y]=m2[y]+1;
		}
		else if(t==2)
		{
			int x,y;
			cin>>x>>y;
			m1[x]--;
			m2[y]--;
			if(m1[x]==0)
			{
				m1.erase(x);
			}
			if(m2[y]==0)
			{
				m2.erase(y);
			}
		}
		else if(t==3)
		{
			int x1,x2,y1,y2;
			cin>>x1>>y1;
			cin>>x2>>y2;
//			cout<<"value of x1 amd x2 are "<<x1<<" "<<x2<<endl;
//			cout<<"value of y1 and y2 are "<<y1<<" "<<y2<<endl;
			if((x2-x1)+1>m1.size()&&(y2-y1+1)>m2.size())
			{
				cout<<"NO"<<endl;
			}
			else{
				
			
			int z1=0;
			int z2=0;
			for(int i=x1;i<=x2;i++)
			{
				//cout<<m1[i]<<endl;
				if(m1[i]==0)
				{
					z1=1;
					break;
				}
			}
			//cout<<"y1 and y2 are "<<y1<<" "<<y2<<"and value in the map are "<<m2[y2]<<endl;
			for(int i=y1;i<=y2;i++)
			{
				//cout<<m2[i]<<" ";
				if(m2[i]==0)
				{
					z2=1;
					break;
				}
			}
			if(z1==0||z2==0)
			{
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}}
			
		}
	}
}
