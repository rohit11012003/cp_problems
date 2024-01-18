#include<bits/stdc++.h>
using namespace std;
void  binary(vector<int> &a, int b)
{
    int n=a.size();
    int l=0;
    int r=n-1;
    int m=(l+r)/2;
    cout<<"m is "<<m<<endl;
    if(a[m]==b)
    {
        cout<< m;
        return ;
    }
     int p=0;
    while(a[m]!=b)
    {
    	cout<<"a[m] ans b is "<<a[m]<<" "<<b<<" l ans m are "<<l<<" "<<r<<endl;
        if(b==a[m])
        {
        	cout<<"yes"<<endl;
            cout<< m;
            return;
        }
        if(l>r)
        {
        	cout<<l<<","<<r<<endl;
            break;
        }
        if(b>a[m])
        {
            l=m+1;
        }
        else if(b<a[m])
        {
            r=m-1;
        }
        
        m=(l+r)/2;
        if(a[m]==r)
        {
        	cout<<m<<endl;
        	p=1;
		}
    }
    if(p==0)
    {
    	cout<<-1<<endl;
	}
    return;
}
int binary1(vector<int> &a, int b)
{
    int n=a.size();
    int l=0;
    int r=n-1;
    int m=(l+r)/2;
    if(a[m]==b)
    {
        return m;
    }
    while(a[m]!=b)
    {
        if(b==a[m])
        {
            return m;
        }
        if(b>a[m])
        {
            r=m-1;
        }
        else if(b<a[m])
        {
           l=l+1;
        }
        if(l==r)
        {
            break;
        }
        m=(l+r)/2;
        
    }
    return -1;
}

int main()
{
	int n;
	cin>>n;
	vector<int> A;
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		A.push_back(c);
	}
	int B;
	cin>>B;

    int ind =-1;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]>A[i+1])
        {
            ind =i;
            break;
        }
    }
    vector<int > a,b;
    cout<<"ind is "<<ind<<endl;
    if(ind!=-1)
    {
        for(int i=0;i<=ind;i++)
        {
            a.push_back(A[i]);
        }
        for(int i=ind+1;i<A.size();i++)
        {
            b.push_back(A[i]);
        }
        binary(a,B);
        int z=2;
       {
           if(z!=-1)
           {
            cout<< z;
           }
           else{
              int z1= binary1(b,B);
              if(z1==-1)
              {
                  cout<< -1;
              }
              else{
                  cout<<z1+ind;
              }
           }
       }
        
    }
    else{
         binary(A,B);
    }
}
