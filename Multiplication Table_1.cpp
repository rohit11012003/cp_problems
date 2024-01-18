#include<bits/stdc++.h>
using namespace std;
void convert(int h,int k)
{
	vector<int>  s;
	int r;
	int q=h;
	while(q!=0)
	{
		r=h%k;
		q=h/k;
		s.push_back(r);
		h=q;
	}
	for(int i=s.size()-1;i>=0;i--)
	{
		cout<<s[i];
	}

	
}
int main()
{
	int k;
	cin>>k;
	for(int i=1;i<k;i++)
	{
		for(int j=1;j<k;j++)
		{
			int h=i*j;
			convert(h,k);
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
