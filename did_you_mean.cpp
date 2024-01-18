#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int n=s.size();
    
    for(int i=0;i<n;i++)
    {
        if(i+2>=n)
        {
            break;
        }
        else{
            int z=0;
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
            {
                z=1;
            }
             if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='o'||s[i+1]=='i'||s[i+1]=='u')
            {
                z=1;
            }
              if(s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='o'||s[i+2]=='i'||s[i+2]=='u')
            {
                z=1;
            }
             if(s[i]==s[i+1]&&s[i+1]==s[i+2])
            {
                //cout<<"yes"<<endl;
                z=1;
            }
            if(z==1)
            {
                continue;
            }
            else{
                v.push_back(i+1);
                i++;
            }

        }
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
    if(v.size()!=0)
    {
    for(int i=0;i<v.size();i++)
    {
        a[v[i]]=1;
    }}
    for(int i=0;i<n;i++)
    {
        cout<<s[i];
        if(a[i]==1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}