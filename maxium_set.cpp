#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,r;
        cin>>l>>r;
         int count=0;
         long long int p=l;
         p=p*2;
         while(p<=r)
         {
            count++;
            p=p*2;
         }
         if(count==0)
         {
            cout<<1<<" "<<r-l+1<<endl;
         }
         else{

         unsigned long long int ans=0;
         long long int z=pow(2,count);
         long long int x=r/z;
         long long int z1=pow(2,count-1);
         z1=z1*3;
         long long int y=r/z1;
         if(y>=l)
         {
            long long int p1=y-l+1;
            ans=ans+p1*(count+1);
            ans=ans%mod;
            ans+=(x-y);
            ans=ans%mod;
         }
         else{
            ans=x-l+1;
            ans=ans%mod;
         }
         cout<<count+1<<" "<<ans<<endl;
         

    }
    }
}