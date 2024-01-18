#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
void built(int ind , int l, int r, ll a[], ll seg[])
{
    if(l==r)
    {
    seg[ind]=a[l];
    return;
    }
    int mid=(l+r)/2;
    built((2*ind)+1, l, mid,a,seg);
    built((2*ind)+2,mid+1, r,a,seg);
    seg[ind]=min(seg[2*ind +1],seg[2*ind +2]);
}
void update(int ind, int l, int r, ll a[], ll seg[], int low, int high)
{
    if(l==r&&l>=low&&r<=high)
    {
        stringstream str;
        str<<a[l];
        string s;
        str>>s;
        int p=0;
        for(int j=0;j<s.size();j++)
        {
            stringstream str1;
            str1<<s[j];
            int e;
            str1>>e;
            p=p+e;
        }
        seg[ind]=a[l]=p;
    }
    else {
        int mid=(high+low)/2;
        if(high<mid)
        {
            update(2*ind+1, low, mid,a,seg,low,high);
        }
        else if(low>mid){
            update(2*ind+2,mid+1,high,a,seg,low,high);
        }
        else {
            update(2*ind+1,low,mid,a,seg,low,high);
            update(2*ind+2,mid+1,high,a,seg,low,high);
        }
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll  a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //cout<<"he"<<endl;
        }
        int z=4*n;
        cout<<"value of z is "<<z<<endl;
        ll seg[z+1];
        cout<<"yes1"<<endl;
        built(0,0,n-1,a,seg);
       // cout<<"yes"<<endl;
       // return 0;
        while(q--)
        {
            int z;
            cin>>z;
            if(z==1)
            {
                int low,high;
                cin>>low>>high;
                update(0,0,n-1,a,seg,low,high);
            }
            else if(z==2)
            {
                int e;
                cin>>e;
                e++;
                cout<<a[e]<<endl;
            }
              }
    }
}