#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    if(s[3]=='A')
    for(int i=0;i<n;i++)
    {
       
        cout<<s[i];
		
    }
    cout<<"done"<<endl;
    return 0;
}
