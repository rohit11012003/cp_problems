#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<unsigned long long int> v[10];
    for(unsigned long long int i=1;i<=9;i++)
    {
        unsigned long long int j;
        if(i==1)
        {
            j=10;
        }
        else if(i==2||i==5)
        {
            j=10;
        }
        else if(i==3)
        {
            j=30;
        }
        else if(i==4)
        {
            j=20;
        }
        else if(i==6)
        {
            j=30;
        }
        else if(i==7)
        {
            j=70;
        }
        else if(i==8)
        {
            j=40;
        }
        else if(i==9)
        {
            j=90;
        }
        v[i].push_back(j);
        while(j<pow(10,19))
        {
            for(unsigned long long int z=2;z<11;z++)
            {
                
                v[i].push_back(j*z);
            }
            j=j*10;
        }

    }
    int t;
    cin>>t;
    //cout<<"yes"<<endl;
    while(t--)
    {
       unsigned  long long int n,m;
        cin>>n>>m;
       unsigned  long long int z=n*m;
        stringstream str;
        str<<n;
        string s;
        str>>s;
        int f;
        for(int i=s.size()-1;i>=0;i--)
        {

            if(s[i]!='0')
            {
                stringstream str1;
                str1<<s[i];
                str1>>f;
                break;
            }
        }
        //cout<<"yes2"<<endl;
       // cout<<f<<endl;
        auto it=lower_bound(v[f].begin(),v[f].end(),z);
        if(it==v[f].end())
        {
            cout<<z<<endl;
        }
        else{
           if(*(it)>z)
           {
           // cout<<*(it)<<endl;
            //cout<<"yes"<<endl;
            it--;
            cout<<*(it)<<endl;
           }
           else{
            cout<<*(it)<<endl;
           }
        }

    }
}