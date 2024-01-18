#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    stack<int> s;
    int p=-1;
    int right_smaller[n];
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            right_smaller[i]=i;
            s.push(i);
            p=0;
        }
        else{
            while(a[s.top()]>=a[i])
            {
                s.pop();
                if(s.size()==0)
                {
                    break;
                }
            }
            if(s.size()==0)
            {
                right_smaller[i]=n-1;
                s.push(i);
            }
            else{
                right_smaller[i]=s.top()-1;
                s.push(i);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<right_smaller[i]<<" ";
    }
    cout<<endl;
    return 0;
}