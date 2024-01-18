#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else{
            b++;
        }
    }
    long long int z=pow(2,b);
    long long int z1=pow(2,n)-pow(2,a)+1;
    for(long long int i=z;i<=z1;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}