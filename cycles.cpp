#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int a[101];
    a[0]=0;
    a[1]=1;
    int z=2;
    for(int i=2;i<101;i++)
    {
        a[i]=a[i-1]+z;
        z++;
    }
    long long int c[101];
    c[0]=0;
    c[1]=c[2]=0;
    c[3]=1;
    c[4]=3;
    long long int z=4;
    for(int i=5;i<101;i++)
    {
        z=z*i;
        c[i]=z/6;
    }
    int p=0;
    int n=-1;
    for(int i=2;i<101;i++)
    {
        if(c[i]==k)
        {
            p=1;
            n=i;
            break;
        }
        else if(c[i]>k)
        {
            n=i-1;
            break;
        }
    }
    if(p==1)
    {
        int ans[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    cout<<0;
                }
                else {
                    cout<<1;
                }
            }
            cout<<endl;
        }
    }
    else{
        
    }
}