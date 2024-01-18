#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.size();
	int j=n-1;
	int i=0;
	int count=0;
	while(i<j)
	{
		if(s[i]!=s[j])
		{
			count=1;
			break;
		}
		else{
			i++;
			j--;
		}
		
	}
	if(count==0)
	{
		cout<<"string is palidrom"<<endl;
	}
	else{
		cout<<"string is not palidrom"<<endl;
	}
	
	
	
	
}
