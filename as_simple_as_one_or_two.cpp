#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int> v;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int z=0;
            if(i+4<n)
            {
                if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'&&s[i+3]=='n'&&s[i+4]=='e')
                {
                    z=1;
                    v.push_back(i+2);
                    i=i+4;
                }

            }
            if(z==1)
            {
                z=0;
                continue;
            }
            else{
                if(i+2<n)
                {
                    if(s[i]=='o'&&s[i+1]=='n'&&s[i+2]=='e')
                    {
                        v.push_back(i+1);
                        i=i+2;
                    }
                    else if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o')
                    {
                        v.push_back(i+1);
                        i=i+2;
                    }
                }
            }
        }
        cout<<v.size()<<endl;
        if(v.size()==0)
        {
            cout<<endl;
        }
        else{
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]+1<<" ";
            }
            cout<<endl;
        }
    }
}