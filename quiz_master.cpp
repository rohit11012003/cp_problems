#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
const ll inf = 1e17;
const ll MAXM = 1e5;
vector<ll> factors[MAXM + 5];
void init()
{
    for (ll i = 1; i <= MAXM; i++)
    {
        for (ll j = i; j <= MAXM; j += i)
        {
            factors[j].pb(i);
        }
    }
}
int solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> vec;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        vec.pb(a);
    }
    sort(vec.begin(),vec.end());
    ll ans1=1e17;
    ll j=0;
    ll count=0;
    vector<ll> frequency(m+5,0);
    for(ll i=0;i<n;i++)
    {
        for(auto x: factors[vec[i]])
        {
            if(x>m)
            {
                break;
            }
            else{
                if(frequency[x]==0)
                {
                    count++;
                    frequency[x]++;
                }
                else{
                    frequency[x]++;
                }
            }
        }
        while(count==m)
        {
            ll ans=vec[i]-vec[j];
            if(ans<ans1)
            {
                ans1=ans;
            }
            for(auto x: factors[vec[j]])
            {
                if(x>m)
                {
                    break;
                }
                else{
                    if(frequency[x]-1==0)
                    {
                        count--;
                        frequency[x]--;
                    }
                    else{
                        frequency[x]--;
                    }
                }
            }
            j++;

        }
        
    }
    if(ans1>=1e17)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<ans1<<endl;
        }
}

int main()
{
    init();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}