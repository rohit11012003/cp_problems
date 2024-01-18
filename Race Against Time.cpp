#include<bits/stdc++.h>
using namespace std;
int main(){
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	//clockwiswe
	t1=t1*5;
	if(m!=0||s!=0)
	{
	h=h*5;
	if(h==60)
	{
		h=0;
		}
		h=h+0.1;	
	}
	else{
		h=h*5;
	}
	if(s!=0)
	{
		m=m+0.1;
	}
	//cout<<h<<" "<<m<<" "<<s<<endl;
	t2=t2*5;
	if(t1==60)
	{
		t1=0;
	}
	if(t2==60)
	{
		t2=0;
	}
	int z1=0;
	int z2=0;
	int f=0;
	//cout<<h<<" "<<m<<" "<<s<<endl;
	for(double i=t1+0.1;abs(i-t2)>=1e-9;i=i+0.1)
	{
		//cout<<i<<" ";
		if(i>=60)
		{
			i=-0.9;
		}
		if (abs(i - m) < 1e-9||abs(i-h)<1e-5||abs(i-s)<1e-9) {
        z1=1;
        //cout<<"value of z1 will change"<<endl;
        break;
         }
		
	}
	
	//cout<<"hello"<<endl;
	for(double i=t1-0.1;abs(i-t2)>=1e-9;i=i-0.1)
	{
		//cout<<i<<" ";
		if (abs(i - m) < 1e-9||abs(i-h)<1e-5||abs(i-s)<1e-9) {
        z2=1;
        break;
         }
		if(i<=0)
		{
			i=60;
		}
	}
//	cout<<"vaLUE OF Z1 IS "<<z1<<" "<<z2<<endl;
	if(z1==0||z2==0)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
