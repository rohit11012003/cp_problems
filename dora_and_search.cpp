#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<int> s1;
        stack<int> s2;
        for(int i=1;i<=n;i++)
        {
            s1.push(i);
        }
        for(int i=n;i>=1;i--)
        {
            s2.push(i);
        }
        int l=0;
        int r=n-1;
        int z=0;
        //cout<<a[l]<<" "<<s2.top()<<endl;
        while(l!=r)
        {
            if(a[l]==s1.top())
            {
                
                s1.pop();
                z=1;
                l++;
            }
            else if(a[l]==s2.top())
            {
                //cout<<"yes"<<endl;
                s2.pop();
                z=1;
                l++;
            }
            else if(a[r]==s1.top())
            {
                s1.pop();
                z=1;
                r--;
            }
            else if(a[r]==s2.top())
            {
                s2.pop();
                z=1;
                r--;
            }
            if(z==1)
            {
                z=0;
            }
            else if(z==0)
            {
                break;
            }
        }
        if(l==r)
        {
            cout<<-1<<endl;
        }
        else {
            cout<<l+1<<" "<<r+1<<endl;
        }
    }
}