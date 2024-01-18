#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	stringstream str;
	str<<n;
	string s;
	str>>s;
	if(s.size()==1)
	{
		switch(n)
		{
			case 0:
				cout<<"zero"<<endl;
				break;
			case 1:
				cout<<"one"<<endl;
				break;
				case 2:
				cout<<"two"<<endl;
				break;
				case 3:
				cout<<"three"<<endl;
				break;
				case 4:
				cout<<"four"<<endl;
				break;
				case 5:
				cout<<"five"<<endl;
				break;
				case 6:
				cout<<"six"<<endl;
				break;
				case 7:
				cout<<"seven"<<endl;
				break;
				case 8:
				cout<<"eight"<<endl;
				break;
				case 9:
				cout<<"nine"<<endl;
				break;
				
		}
	}
	else if(s.size()==2)
	{
		int a=n/10;
		int b=n%10;
		if(a==1&&b==1)
		{
			cout<<"eleven"<<endl;
		}
		else if(a==1&&b==0)
		{
			cout<<"ten"<<endl;
		}
		else if(a==1&&b==2)
		{
			cout<<"twelve"<<endl;
		}
		else if(a==1&&b==3)
		{
			cout<<"thirteen"<<endl;
		}
		else if(a==1&&b==4)
		{
			cout<<"fourteen"<<endl;
		}
		else if(a==1&&b==5)
		{
			cout<<"fifteen"<<endl;
		}
		else if(a==1&&b==6)
		{
			cout<<"sixteen"<<endl;
		}
		else if(a==1&&b==7)
		{
			cout<<"seventeen"<<endl;
		}
		else if(a==1&&b==8)
		{
			cout<<"eighteen"<<endl;
		}
		else if(a==1&&b==9)
		{
			cout<<"nineteen"<<endl;
		}
		else 
		{
		
		switch(a)
		{
		
				case 2:
				cout<<"twenty";
				break;
				case 3:
				cout<<"thirty";
				break;
				case 4:
				cout<<"forty";
				break;
				case 5:
				cout<<"fifty";
				break;
				case 6:
				cout<<"sixty";
				break;
				case 7:
				cout<<"seventy";
				break;
				case 8:
				cout<<"eighty";
				break;
				case 9:
				cout<<"ninety";
				break;	
		}
		switch(b)
		{
				case 0:
				cout<<endl;
				break;
			case 1:
				cout<<"-one"<<endl;
				break;
				case 2:
				cout<<"-two"<<endl;
				break;
				case 3:
				cout<<"-three"<<endl;
				break;
				case 4:
				cout<<"-four"<<endl;
				break;
				case 5:
				cout<<"-five"<<endl;
				break;
				case 6:
				cout<<"-six"<<endl;
				break;
				case 7:
				cout<<"-seven"<<endl;
				break;
				case 8:
				cout<<"-eight"<<endl;
				break;
				case 9:
				cout<<"-nine"<<endl;
				break;
				
		}
		}
		}
		return 0;
	}
	

