#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		cin>>d;
		int y=pow(d,2)-(4*d);
		if(y<0)
		{
			cout<<"N"<<endl;
		}
		else{
			double z=pow(y,0.5);
			float a1,a2;
			a1=(d-z)/2;
			a2=(d+z)/2;
			float b1,b2;
			b1=d-a1;
			b2=d-a2;
			int h=0;
			if(a1>=0&&b1>=0)
			{
				cout<<"Y"<<" ";
				cout<< fixed<<setprecision(9)<<a1<<" "<< fixed<<setprecision(9)<<b1<<endl;
				h=1;
			}
			if(h==0)
			{
				if(a1>=0&&b2>=0)
				{
					cout<<"Y"<<" ";
					cout<< fixed<<setprecision(9)<<a2<<" "<< fixed<<setprecision(9)<<b2<<endl;
					h=1;
				}
			}
			if(h==0)
			{
				cout<<"N"<<endl;
			}
		}
	}
	return 0;
}
