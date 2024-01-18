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
        long long int z=0;
        long long int ans[n];
        unordered_map<long long int, int> m;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                z=z+a[i];
            }
            else 
            {
                long long int z2=z;
                int z1;
                long long int p1=-1;
                long long int count=0;
                for(int j=i+1;j<n;j++)
                {
                    z1=j;
                    if(a[j]==0)
                    {
                        break;
                    }
                    else{
                        z=z+a[j];
                        m[z]=m[z]+1;
                        if(m[z]>count)
                        {
                            count=m[z];
                            p1=z;
                        }
                    }
                }
                m.clear();
               if(count>1)
               {
                a[i]=-p1;
                z=z-p1;
               }
               else{
                a[i]=-z2;
                z=z-z2;
               }
               i=z1;
            }
            
        }
        z=0;
        
        int count1=0;
        for(int i=0;i<n;i++)
        {
            z=z+a[i];
            ans[i]=z;
            if(ans[i]==0)
            {
                count1++;
            }
            
        }
       if(ans[n-1]!=0&&a[n-1]==0)
       {
        count1++;
       }
       cout<<count1<<endl;
    }
}