/*5
2 5 9 8 6
3 65 4 8 6*/
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,a,n,b) for(int i = a;i<n;i+=b)
#define sz(x) ((int)(x).size()) 
#define pb push_back
#define F first
#define S second
const int mxN = 2e5, mod = 1e9+7;
const int INF = 1e18;
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    // cin>>t;
    t = 1;
    while(t--)
    {  
      int n;
      cin>>n;
      vector<int>a(n),b(n);
      for(auto &it : a)
      {
        cin>>it;
      }
      for(auto &it : b)
      {
        cin>>it;
      }
      priority_queue<int,vector<int>,greater<int>>q;
      for(auto it : a)
      {
         q.push(it);
      }
      sort(b.begin(),b.end());
      int i = 0;
      int ans = 1;
      cout<<n<<"\n";

      for( i = 0;i<n;i++)
      {
        auto it = q.top();
        if(it != 1 &&  b[i] != 1)
        {
          break;
        }
        else
        {
           q.pop();
           q.push(it+b[i]);  
        }
      }
      for(int j = i;j<n;j++)
      {
        ans = ans*b[i];
      }
      while(!q.empty())
      {
        ans = ans*q.top();
        q.pop();
      }
      // cout<<ans<<"\n";
    }
    return 0;
}
