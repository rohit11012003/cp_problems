#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
        }
        for(int l=0;l<n;l++)
		if(s[l]=='U')
		  s[l]='D';
		else if(s[l]=='D')
		    s[l]='U';
        for(int k=0;k<n;k++)
        {
        	cout<<s[k];
		}
		cout<<endl;
    }
    return 0;


}
