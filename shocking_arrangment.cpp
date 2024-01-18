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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        stack<long long int> s1;
        stack<long long int> s2;
        int j;
       vector<long long int> v1;
       vector<long long int> v2;
       if(a[n-1]==0)
       {
        cout<<"NO"<<endl;
       }
       else{

       
       for(int i=0;i<n;i++)
       {
        if(a[i]>=0)
        {
            v1.push_back(a[i]);
        }
        else{
            v2.push_back(a[i]);
        }
       }
       sort(v1.begin(),v1.end());
       reverse(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       for(int i=0;i<v1.size();i++)
       {
        s1.push(v1[i]);
       }
      //1 reverse(v2.begin(),v2.end());
       for(int i=0;i<v2.size();i++)
       {
        s2.push(v2[i]);
       }
        long long int z=a[n-1]-a[0];
        long long int count=0;
        vector<long long int> ans;
        ans.push_back(s1.top());
        s1.pop();
        bool flag =true;
        count=ans[0];
        if(n==1)
        {
            flag=false;
        }
        for(int i=1;i<n;i++)
        {
            int p=INT_MAX;
            if(s1.size()!=0)
            {
                p=count+s1.top();
                p=abs(p);
            }
            int q=INT_MAX;
            if(s2.size()!=0)
            {
                q=count+s2.top();
                q=abs(q);

            }
           // cout<<p<<" "<<q<<endl;
            if(p<=q)
            {
                count+=s1.top();
                
                ans.push_back(s1.top());
                s1.pop();
            }
            else{
                count+=s2.top();
                ans.push_back(s2.top());
                s2.pop();
            }
            if(abs(count)>=z)
            {
                flag=false;
                break;
            }

        }
        if(flag==true)
        {

        
      vector< long long int> ans1;
       long long int count1=0;
      //long long int count1=0;
       
        
       long long int ma=0;
        long long int mi=0;
        for(int i=0;i<n;i++)
        {
            count1=count1+ans[i];
            if(count1>ma)
            {
                ma=count1;
            }
            if(mi>count1)
            {
                mi=count1;
            }
        }
        //cout<<"ma is "<<ma<<" "<<mi<<endl;
        long long int z1= ma-mi;
      if(z1>=z)
      {
        flag=false;
      }
        }

        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    }
}
