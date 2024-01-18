#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector< pair <int,int> > vect;
	long long int n;
	cin>>n;
	long long a[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		vect.push_back( make_pair(a[i],i+1) );
	}
	long long int m;
	long long int s1=0;
	long long int s2=0;
	cin>>m;
	long long int b[m];
	sort(vect.begin(),vect.end());
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
		long long int l=0;
	long long 	int r=n-1;
	long long int s;
		 while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (vect[m].first == b[i])
        {
            s1=s1+vect[m].second;
            s2=s2+(n+1-(vect[m].second));
            break;}
  
        // If x greater, ignore left half
        if (vect[m].first < b[i])
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
		
	}
	
}
cout<<s1<<" "<<s2<<endl;
return 0;
}
