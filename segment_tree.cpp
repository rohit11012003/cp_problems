#include<bits/stdc++.h>
using namespace std;
void built(int ind , int low, int high, int a[], int seg[])
{
   
    if(low==high)
    {
    seg[ind]=a[low];
    return;
    }
    int mid=(low+high)/2;
    built((2*ind)+1, low, mid,a,seg);
    built((2*ind)+2,mid+1, high,a,seg);
    seg[ind]=min(seg[2*ind +1],seg[2*ind +2]);
    
}

int query(int ind, int low, int high, int l, int r, int a[], int seg[])
{
   
    if(l>high||r<low)
    {
        return INT_MAX;
    }
    if(l<=low&&r>=high)
    {
        return seg[ind];
    }
    int mid=(low+high)/2;
    int left=query(2*ind+1,low, mid,l,r,a,seg);
    int right=query(2*ind+2,mid+1,high,l,r,a,seg);
    return min(left,right);

}
void update(int ind , int low, int high, int i, int val, int seg[])
{
    if(low==high)
    {
        seg[ind]=val;
        return ;
    }
    else{
        int mid=(high+low)/2;
        if(i<=mid)
        {
            update(2*ind+1, low, mid,i,val,seg);
        }
        else{
            update(2*ind+2,mid+1,high,i,val,seg);
        }
        seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
    cin>>a[i];
    }
    int seg[4 * n];
    cout<<"hello"<<endl;
    built(0,0,n-1,a,seg);
    cout<<"hello1"<<endl;
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int l,r;
            cin>>l>>r;
           cout<< query(0, 0,n-1,l,r,a,seg)<<endl;
        }
        else{
            int i, val;
            cin>>i>>val;
            a[i]=val;
            update(0,0,n-1,i,val,seg);
            
        }
    }



}