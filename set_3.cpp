#include<bits/stdc++.h>
using namespace std;
int main()

	
       {
       long long int n,s1,p,q;
       cin>>n>>s1>>p>>q;
      // set<long long int > s;
       vector<long long int > v;
      // s.insert(s1);
       v.push_back(s1);
       for(long long int i=1;i<n;i++)
       {
           long long int k=v[i-1]*p+q;
           //s.insert(k);
           v.push_back(k);
       }
      for(int i=0;i<v.size();i++)
      {
      	cout<<v[i]<<" ";
	  }
	  cout<<endl;
       long long int count=0;
       for(int i=0;i<v.size()-1;i++)
       {
           if(v[i]!=v[i+1])
           {
               count++;
               
           }
       }
       count++;
       cout<<count<<endl;
    return 0;
}
