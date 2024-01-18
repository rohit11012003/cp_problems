#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            stringstream str;
            str<<s[i];
            int k;
            str>>k;
            a[i]=k;
        }
        long long int z=0;
        for(int i=0;i<n;i++)
        {
            map<int, int> m;
            for(int j=0;j<10;j++)
            {
                m[j]=0;
            }
            int count=0;
            int ma=1;
            for(int j=i;j<105+i;j++)
            {
                //cout<<a[i]<<" "<<a[j]<<endl;
                if(m[a[j]]==0)
                {
                    count++;
                    m[a[j]]=m[a[j]]+1;;
                }
                else{
                   // cout<<m[a[j]]<<endl;
                    m[a[j]]=m[a[j]]+1;
                }
                if(m[a[j]]>ma)
                {
                    ma=m[a[j]];
                    
                }
                //cout<<count<<" "<<ma<<endl;
                if(count>=ma)
                {
                    z++;
                }
                if(j==n-1)
                {
                    break;
                }

            }
        }
        cout<<z<<endl;
    }
}