#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	long long int count=0;
	for(int i=0;i<=a&&0.5*i<=n;i=i+2)
	{
		
		int bo=n-(i*0.5);
		//cout<<bo<<endl;
		if(bo==0)
		{
			count++;
			continue;
		}
	//cout<<"valoe of count and i is "<<count<<" "<<i<<endl;
		if(b+2*c<bo)
		{
			//cout<<"hello";
			continue;
		}
		//cout<<bo<<" "<<i<<endl;
		else if(b==0&&c!=0)
		{
			if(bo%2==0&&c>=bo/2)
			{
				count++;
			}
		}
		else if(c==0&&b!=0)
		{
			if(b>=bo)
			{
				count++;
			}
		}
		
		else{
			
		
		if(bo>b)
		{
			int p;
			int z=bo-b;
			if(z%2==0)
			{
				p=z/2;
			}
			else{
				p=z/2;
				p=p+1;
				z=z-1;
			}
			if(2*c>=bo)
			{
			//	cout<<z<<" hello "<<(bo/2)<<" "<<endl;
				count=count+(bo/2)-p+1;
			}
			else{
				count=count+(c-p+1);
			}
		}
		else{
			if(2*c>=bo)
			{
				count=count+(bo/2)+1;
			}
			else{
				count=count+c+1;
			}
		}
	}
		
	}
	cout<<count<<endl;
}
