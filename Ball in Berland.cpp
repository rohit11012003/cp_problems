#include<bits/stdc++.h>
using namespace std;
 int  main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		long long int a1,b1,k;
 		cin>>a1>>b1>>k;
 		long long int b[k];
 		long long int g[k];
 		vector<pair<int,int> > v1;
 		vector<pair<int,int> > v2;
 		for(int i=0;i<k;i++)
 		{
 			cin>>b[i];
		 }
		 for(int i=0;i<k;i++)
		 
		 {
		 	cin>>g[i];
		 }
//		 for(int i=0;i<k;i++)
//		 {
//		 	v1.push_back({b[i],g[i]});
//		 }
//		 for(int i=0;i<k;i++)
//		 {
//		 	v2.push_back({g[i],b[i]});
//		 }
		 //sort(v1.begin(),v1.end());
		 //sort(v2.begin(),v2.end());
		 unordered_map<int,int> m1;
		 unordered_map<int,int> m2;
		 for(int i=0;i<k;i++)
		 {
		 	m1[b[i]]=m1[b[i]]+1;
		 }
		 for(int i=0;i<k;i++)
		 {
		 	m2[g[i]]=m2[g[i]]+1;
		 }
		 long long int z=k*(k-1)/2;
		 //cout<<z<<endl;
		 long long int sum1=0;
		 long long int sum2=0;
		 for(auto it : m1)
		 {
		 	//cout<<it.first<<" "<<it.second<<endl;
		 	long long int p=it.second;
		 	sum1+=(p)*(p-1)/2;
		 }
		 //cout<<"FEAV"<<endl;
		 for(auto it : m2)
		 {
		 long long 	int p=it.second;
		 	sum2+=(p)*(p-1)/2;
		 }
		 cout<<z-sum1-sum2<<endl;
	 }
 }
