#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int s,d;
	cin>>s>>d;
	
    vector<long long int> v1,v2;
    long long int row=s;
    long long int col=s;
	for(int i=0;i<d;i++)
	{
	    if(i==0)
		{
		long long int a,b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
		row=row-1;
		col--;
		cout<<row*col<<endl;
		
		}
		else{
		
		long long int a,b;
		cin>>a>>b;
		vector<long long int> v3,v4;
		v3=v1;
		v4=v2;
		sort(v3.begin(),v3.end());
		sort(v4.begin(),v4.end());
		long long int l=v3[0];
		int g=0;
		int h=0;
		long long int r=v3[v3.size()-1];
		long long int o = l + (r - l) / 2;
		while (l <= r) {
        
 
        // Check if x is present at mid
        if (v3[o] == a)
            g=1;
 
        // If x greater, ignore left half
        if (v3[o] < a)
            l = o + 1;
 
        // If x is smaller, ignore right half
        else
            r = o - 1;}
            	long long int q=v4[0];
            long long int p=v4[v4.size()-1];
		long long int k = q + (p - l) / 2;
		while (q <= p) {
        
 
        // Check if x is present at mid
        if (v4[k] == b)
            h=1;
 
        // If x greater, ignore left half
        if (v4[k] < b)
            q = k + 1;
 
        // If x is smaller, ignore right half
        else
            p = k - 1;}
            
	if(g==1)
	{
		row--;
	}
	if(h==1)
	{
		col--;
	}
	cout<<row*col<<endl;
	
	v1.push_back(a);
		v2.push_back(b);
	}
	}
	
}
