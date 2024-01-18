#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v(27,0);
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        v[c]=1;
    }
    s.clear();
    cin>>s;
    //cout<<s<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        string s1;
        cin>>s1;
        int n1=s.size();
        int n2=s1.size();
        int p;
        if(n1==n2)
        {
            p=0;
        }
        else if(n1==n2+1)
        {
            p=1;
        }
        int z=0;
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s1[j])
            {
               //cout<<"yes"<<endl;
                if(i!=s.size()-1)
                {
                    j++;
                }
                
            }
             else
            {
               // cout<<s[i]<<" "<<s1[j]<<" "<<v[s1[j]-'a']<<endl;
                if(s[i]=='?'&&v[s1[j]-'a']==1)
                {
                  //  cout<<"yes1"<<endl;
                    if(i!=s.size()-1)
                    {
                        j++;
                    }
                   
                }
                else if(s[i]=='*')
                {
                    if(i==s.size()-1)
                    {
                        if(j==s1.size())
                        {
                            j--;
                            continue;
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        if(p==0)
                        {
                            j++;
                        }
                        else{
                            continue;
                        }
                    }
                  
                }
                else{
                    z=1;
                    break;
                }
            }
        }
       // cout<<j<<endl;
        if(j!=s1.size()-1)
        {
            z=1;
        }
        if(z==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}