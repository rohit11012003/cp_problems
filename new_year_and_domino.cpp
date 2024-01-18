#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    cin>>h>>w;
    int a[h][w];
    vector<string > s;
    for(int i=0;i<h;i++)
    {
        string z;
        cin>>z;
        s.push_back(z);
    }
    int count=0;
    a[0][0]=0;
    for(int i=1;i<w;i++)
    {
        if(s[0][i-1]=='.'&&s[0][i]=='.')
        {
            count++;
        }
        a[0][i]=count;
    }
    count=0;
    for(int i=1;i<h;i++)
    {
        if(s[i-1][0]=='.'&&s[i][0]=='.')
        {
            //cout<<"ys "<<endl;
            count=count+1;
          // cout<<"values of count is "<<count<<endl;
        }
        a[i][0]=count;
    }
    //cout<<"hello";
   
    //return 0;
    for(int i=1;i<h;i++)
    {
        for(int j=1;j<w;j++)
        {
            if(s[i][j]=='.')
            {
                a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
                if(s[i-1][j]=='.')
                {
                    a[i][j]=a[i][j]+1;
                }
                if(s[i][j-1]=='.')
                {
                    a[i][j]=a[i][j]+1;
                }
            }
            else{
                a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            }
        }
    }
   
   
   //return 0;
    int q;
    cin>>q;
    while(q--)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1;
        cin>>r2>>c2;
        r1--;
        c1--;
        r2--;
        c2--;
        int z=0;
        for(int i=r1+1;i<=r2;i++)
        {
            if(s[i-1][c1]=='.'&&s[i][c1]=='.')
            {
                z++;
            }
        }
        for(int i=c1+1;i<=c2;i++)
        {
            if(s[r1][i-1]=='.'&&s[r1][i]=='.')
            {
                z++;
            }
        }
        cout<<a[r2][c2]-a[r2][c1]-a[r1][c2]+a[r1][c1]+z<<endl;
    }

}