#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
unsigned long long power(unsigned long long x,
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
 
    x = x % p; // Update x if it is more than or
    // equal to p
 
    while (y > 0)
    {
     
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
 
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n, 
                                            int p)
{
    return power(n, p - 2, p);
}
 
// Returns nCr % p using Fermat's little
// theorem.
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
 
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count1=0;
    int count2=0;
    long long int ans=1;
   
   // cout<<ans<<endl;
    
    int z1=n/3;
    int z2=n/6;
    ans=nCrModPFermat(z1,z2,mod);
         for(int i=0;i<n;i++)
    {
        vector<int> v;
        v.push_back(a[i]);
        v.push_back(a[i+1]);
        v.push_back(a[i+2]);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
      //  cout<<v[0]<< " "<<v[1]<<" "<<v[2]<<endl;
        if(v[1]>v[2])
        {
            ans=ans*1;
        }
        else if(v[0]>v[1])
        {
            ans=ans*2;
        }
        else{
            ans=ans*3;
        }
        ans=ans%mod;
        i=i+2;
    }
        cout<<ans<<endl;
       // cout<<619864491%mod<<endl;
}