#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)

    {
        cin>>a[i];
    }

    stack<int> s;
    int left_smaller[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            left_smaller[i]=i;
            s.push(a[i]);
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
                left_smaller[i]=0;
                s.push(i);
            }
            else{
                left_smaller[i]=s.top()+1;
                s.push(i);
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<left_smaller[i]<<" ";
    }
    cout<<endl;
}