#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> ans;
    if(k==1)
    {
        for(int i=0;i<n;i++)
        {
            ans.push_back(1);
        }
    }
    else{
        int i=1;
        int j=i+1;
        while(n>0)
        {
            if(i==j)
            {
                j++;
                if(j>k)
                {
                    i++;
                    j=i+1;
                }
                if(i>k)
                {
                    for(int i=1;i<=k;i++)
                    {
                        if(n>0)
                        {
                            ans.push_back(i);
                            n--;
                        }
                        if(n>0)
                        {
                            ans.push_back(i);
                            n--;
                        }
                    }
                    i=1;j=i+1;
                }
            }
            if(n>0)
            ans.push_back(i);
            n--;
            if(n>0)
            ans.push_back(j);
            n--;
            j++;
            if(j>k)
            {
                i++;
                j=i+1;
            }
             if(j>k)
                {
                    i++;
                    j=i+1;
                }
                if(i>k)
                {
                    for(int i=1;i<=k;i++)
                    {
                        if(n>0)
                        {
                            ans.push_back(i);
                            n--;
                        }
                        if(n>0)
                        {
                            ans.push_back(i);
                            n--;
                        }
                    }
                    i=1;j=i+1;
                }
        }
        
    }
    for(int i=0;i<ans.size();i++)
        {
            char a=ans[i]+'a'-1;
            cout<<a;
        }
        cout<<endl;
}