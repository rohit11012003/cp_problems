#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int> a;
   vector<int> b;
  
    for(int i=0;i<n;i++)
    {
    	int d,e;
    	cin>>d;
    	a.push_back(d);
    	cin>>e;
    	b.push_back(e);
    }
    int count =0;
    for(int i=0;i<a.size()-1;i++)
    {
        int t=1;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]==a[j]&&b[i]==b[j])
            {
            	cout<<j<<endl;
            	t++;
            a.erase(a.begin()+j);
            b.erase(b.begin()+j);
            j=j-1;
                
            }
        }
        if(t>count)
        {
            count =t;
            
        }
    }
    cout<<count<<endl;
    return 0;
}
