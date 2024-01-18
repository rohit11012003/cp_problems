#include<bits/stdc++.h>
using namespace std;
double bin(double l, double r, vector<pair<int, int>> &v)
{
    if(abs(l-r)/(max(1.0,abs(r)))<1e-6)
    {
        return l;
    }
    double m=(l+r)/2;
  //  cout<<l<<" "<<m<<" "<<r<<endl;
    double a=0;
    for(int i=0;i<v.size();i++)
    {
        double t=v[i].second+abs(l-v[i].first);
        if(t>a)
        {
            a=t;
        }
    }
    double b=0;
    for(int i=0;i<v.size();i++)
    {
        double t=v[i].second+abs(m-v[i].first);
        if(t>b)
        {
            b=t;
        }
    }
    double c=0;
    for(int i=0;i<v.size();i++)
    {
        double t=v[i].second+abs(r-v[i].first);
        if(t>c)
        {
            c=t;
        }
    }
 //   cout<<a<<" "<<b<<" "<<c<<endl;
    if(a>=max(b,c))
    {
        return bin(m,r,v);
    }
    if(c>=max(a,b))
    {
        return bin(l,m,v);
    }
    else{
        return l;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({x[i],t[i]});
    }
    sort(v.begin(),v.end());
    double  ans= bin(v[0].first,v[n-1].first,v);
    cout<<fixed<<ans<<setprecision(10)<<endl;
    }
}