#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	long long int count1=0;
	long long int count2=0;
	if(a>b)
	{
		for(int i=a;i<=a*b;i=i+a)
		{
			if(i%b==0)
			{
				long long int p=i/b;
				p=(p-1)*b;
				count1=count1+p+a-i;
				count2=count2+i-p;
				break;
			}
			else{
				long long int p=i/b;
				p=p*b;
				count1+=p+a-i;
				count2=count2+i-p;
			}
		}
		cout<<count1<<" "<<count2<<endl;
		if(count1==count2)
		{
			cout<<"Equal"<<endl;
		}
		else{
			if(count1>count2)
			{
				cout<<"Masha"<<endl;
			}
			else{
				cout<<"Dasha"<<endl;
			}
		}
	}
	else	
	{
		for(int i=b;i<=a*b;i=i+b)
		{
			if(i%a==0)
			{
				long long int p=i/a;
				p=(p-1)*a;
				count1=count1+p+b-i;
				count2=count2+i-p;
				break;
			}
			else{
				long long int p=i/a;
				p=p*a;
				count1+=p+b-i;
				count2=count2+i-p;
			}
		}
		//cout<<count1<<" "<<count2<<endl;
		if(count1==count2)
		{
			cout<<"Equal"<<endl;
		}
		else{
			if(count1>count2)
			{
				cout<<"Dasha"<<endl;
			}
			else{
				cout<<"Masha"<<endl;
			}
		}
	}
}
