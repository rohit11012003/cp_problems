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
        sort(a,a+n);
        vector<int> ans;
        for(int i=1;i<n-1;i++)
        {
            int p1=a[i]-a[0];
            int p2=a[n-1]-a[i];
            
        }
       int j=a[n-1]-a[0]+max((a[1]-a[0]),(a[n-1]-a[n-2]));
       ans.push_back(j);
    }
}