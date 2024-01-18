#include<bits/stdc++.h>
using namespace std;
void build(int ind, int low, int high,int a[], int seg[], bool fl)
{
    if(low==high)
    {
        seg[ind]=a[low];
        return ;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid,a,seg,!fl);
    build(2*ind+2, mid+1,high,a,seg,!fl);
    if(fl==true)
    {
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
    }
    else{
        seg[ind]=seg[2*ind+1]^seg[2*ind+2];
    }
}
void update(int ind, int low,int high, int i, int val, int a[], int seg[], bool fl)
{
    if(low==high)
    {
        seg[ind]=val;
        return ;
    }
    int mid=(low+high)/2;
    if(i<=mid)
    {
        update(2*ind+1,low,mid,i,val,a,seg,!fl);
    }
    else{
        update(2*ind+2,mid+1,high,i,val,a,seg,!fl);
    }
     if(fl==true)
    {
        seg[ind]=seg[2*ind+1]|seg[2*ind+2];
    }
    else{
        seg[ind]=seg[2*ind+1]^seg[2*ind+2];
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int el=pow(2,n);
    int a[el];
    for(int i=0;i<el;i++)
    {
        cin>>a[i];
    }
    bool  flag;
    if(n%2==0)
    {flag=false;}
    else{
        flag=true;
    }
    int seg[4*el];
    build(0,0,el-1,a,seg,flag);
    //cout<<seg[0]<<endl;
    for(int i=0;i<m;i++)
    {
        int ind,val;
        cin>>ind>>val;
        ind--;
        a[ind]=val;
        bool fl;
        if(n%2==0)
    {fl=false;}
    else{
        fl=true;
    }
        update(0,0,el-1,ind,val,a,seg,fl);
        cout<<seg[0]<<endl;
    }
}