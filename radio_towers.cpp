#include<bits/stdc++.h>
#include<math.h>
using namespace std;
const int MOD=998244353;
int add(int x, int y)
{
    x += y;
    while(x >= MOD) x -= MOD;
    while(x < 0) x += MOD;
    return x;
}

int mul(int x, int y)
{
    return (x * 1ll * y) % MOD;
}

int binpow(int x, int y)
{
    int ans = 1;
    while(y > 0)
    {
        if(y % 2 == 1)
            ans = mul(ans, x);
        x = mul(x, x);
        y /= 2;
    }
    return ans;
}

int divide(int x, int y)
{
    return mul(x, binpow(y, MOD - 2));
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=add(a[i-1],a[i-2]);
    }
    cout<<divide(a[n],binpow(2,n))<<endl;

}