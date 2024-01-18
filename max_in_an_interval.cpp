#include<bits/stdc++.h>
using namespace std;
void segment (int ind, int left, int right, int a[], int seg[])
{
    if(left==right)
    {
        seg[ind]=a[left];
        return ;
    }
    int mid=(left+right)/2;
    segment((2*ind)+1,left,mid,a,seg);
    segment((2*ind)+2, mid+1,right,a,seg);
    seg[ind]=max(seg[(2*ind)+1],seg[(2*ind)+2]);
}
void update(int ind , int left, int right, int a[], int seg[], int i, int val)
{
    if(left==right)
    {
        if(left==i)
        {
            seg[ind]=val;
        }
    }
    int mid=(left+right)/2;
    if(mid>=i)
    {
        update(2*ind+1, left,mid, a, seg,i,val);
    }
    else{
        update(2*ind+2,mid+1,right,a,seg,i,val);
    }
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
int query(int ind, int left, int right, int seg[], int a, int b)
{
    if(b>=right&&a<=left)
    {
        return seg[ind];
    }
    else if(b<left||a>right)
    {
        return 0;
    }
    else{
        int mid=(left+right)/2;
        int le=query(2*ind+1,left,mid,seg,a,b);
        int re=query(2*ind+2,mid+1,right, seg, a,b);
        return max(le,re);
    }
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
    int seg[(4*n)+1];
    segment(0,0,n-1,a,seg);
   
    cout<<" built is complete"<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        a--;
        b--;
       cout<< query(0,0,n-1,seg,a,b)<<endl;
    }
}