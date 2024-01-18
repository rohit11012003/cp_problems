#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        cout<<x-y+1+(x-1-y-1)+1<<endl;
        for(int i=y;i<=x;i++)
        {
            cout<<i<<" ";
        }
        for(int i=x-1;i>=y+1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}