#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k<n)
        {
            long long int sum=0;
            long long int count=0;
            int j=0;
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
                if(i-j>=k-1)
                {
                    if(sum>count)
                    {
                        count=sum;
                        sum=sum-a[j];
                        j++;
                    }
                }
            }
           // cout<<count<<endl;
            long long int p=k*(k-1);
            p=p/2;
            count+=p;
            cout<<count<<endl;
        }
        else{
            long long int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=a[i];
            }
            cout<<sum<<endl;
            long long int count=1;
            k=k-n;
            long long int count2=k/(n-1);
            int count1=k%(n-1);
            cout<<count2<<endl;
            cout<<count1<<endl;
            long long int sum1=n*(n-1);
            sum1=sum1/2;
            cout<<sum1<<endl;
          long long int sum2=sum1*2*count2;
          long long int sum3=0;
          long long int j=2;
          for(int i=0;i<count1;i++)
          {
            sum3+=j;
            j=j+2;
          }
          cout<<sum+sum1+sum2+sum3<<endl;

        }
    }
}