#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int open;
    int close;
    int full;
    info(int _open,int _close, int _full)
    {
        open=_open;
        close=_close;
        full=_full;
    }
    info()
    {
        open =0;
        close=0;
        full=0;
    }
};
info merge(info s1, info s2)
{
    info s;
    s.full=s1.full+s2.full+min(s1.open,s2.close);
    s.open=s2.open+s1.open-min(s1.open,s2.close);
    s.close=s1.close+s2.close-min(s1.open,s2.close);
    return s;
}
void build(int ind, int low, int high, string &s,info seg[])
{
    if(high==low)
    {
        if(s[low]=='(')
        {
            seg[ind].open=1;
            seg[ind].close=0;
            seg[ind].full=0;
        }
        else{
            seg[ind].open=0;
            seg[ind].close=1;
            seg[ind].full=0;
        }
        return ;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low, mid,s,seg);
    build(2*ind+2,mid+1,high,s,seg);
   seg[ind]= merge(seg[2*ind+1],seg[2*ind+2]);
}
info query(int ind, int low, int high, int l, int r, info seg[])
{
    if(r<low||l>high)
    {
        return info();
    }
    if(low>=l&&r>=high)
    {
        return seg[ind];
    }
    int mid=(low+high)/2;
    info left=query(2*ind+1, low, mid,l,r,seg);
    info right=query(2*ind+2,mid+1,high,l,r,seg);
    return merge(left,right);
}
int main()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n=s.size();
    info seg[4*n+1];
    build(0,0,n-1,s,seg);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        info ans=query(0,0,n-1,a,b,seg);
        cout<<2*ans.full<<endl;

    }
}