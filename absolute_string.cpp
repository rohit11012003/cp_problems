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
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                int p=a[i]+a[i+1];
                p=p/2;
                v1.push_back(p);
            }
            else if(a[i]>a[i+1])
            {
               int  p=a[i]+a[i+1];
               if(p%2==0)
               {
                p=p/2;
               }
               else{
                p=p/2;
                p=p+1;
               }
               v2.push_back(p);
            }
        }
        int ma;
        int mi;
        if(v1.size()==0)
        {
            mi=0;
        }
        else{
            sort(v1.begin(),v1.end());
            mi=v1[0];
        }
        if(v2.size()==0)
        {
            ma=1e9;
        }
        else{
            sort(v2.begin(),v2.end());
            ma=v2[v2.size()-1];
        }
        cout<<mi<<" "<<ma<<endl;
        if(mi>ma)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<mi<<endl;
        }


    }
}