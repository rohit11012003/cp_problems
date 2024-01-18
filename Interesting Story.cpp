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
		vector<int > a;
		vector<int > b;
		vector<int > c;
		vector<int > d;
		vector<int> e;
		int lenght[n];
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			int a_1=0;
			int b_1=0;
			int c_1=0;
			int d_1=0;
			int e_1=0;
			lenght[i]=s.size();
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='a')
				{
					a_1++;
				}
				if(s[i]=='b')
				{
					b_1++;
				}
				if(s[i]=='c')
				{
					c_1++;
				}
				if(s[i]=='d')
				{
					d_1++;
				}
				if(s[i]=='e')
				{
					e_1++;
				}
			}
			a.push_back(s.size()-(2*a_1));
				b.push_back(s.size()-(2*b_1));
					c.push_back(s.size()-(2*c_1));
						d.push_back(s.size()-(2*d_1));
							e.push_back(s.size()-(2*e_1));
		}
		sort(a.begin(),a.end());

		sort(b.begin(),b.end());
		sort(c.begin(),c.end());
	
		sort(d.begin(),d.end());
		sort(e.begin(),e.end());
//		int count1=0;
//		int count2=0;
//		int count3=0;
//		int count4=0;
//		int count5=0;
		int sum1=0;
		int sum2=0;
		int sum3=0;
		int sum4=0;
		int sum5=0;
		vector<int> v;
		for(int i=0;i<a.size();i++)
		{
			 sum1=sum1+a[i];
			if(sum1>=0)
			{
			v.push_back(i);	
			break;
			}
			if(i==a.size()-1)
			{
				v.push_back(a.size());
			}
		}
		
		for(int i=0;i<b.size();i++)
		{
			sum2=sum2+b[i];
			if(sum2>=0)
			{
			v.push_back(i);	
			break;
			}
			if(i==b.size()-1)
			{
				v.push_back(b.size());
			}
		}
		//cout<<endl;
		for(int i=0;i<c.size();i++)
		{
			//cout<<c[i]<<" ";
			
			 sum3=sum3+c[i];
			//cout<<"sum3 is "<<sum3<<" i is "<<i<<endl;;
			if(sum3>=0)
			{
			v.push_back(i);	
			break;
			}
			if(i==c.size()-1)
			{
				v.push_back(c.size());
			}
		}
		for(int i=0;i<d.size();i++)
		{
		 	sum4=sum4+d[i];
			if(sum4>=0)
			{
			v.push_back(i);	
			break;
			}
			if(i==d.size()-1)
			{
				v.push_back(d.size());
			}
		}
		for(int i=0;i<e.size();i++)
		{
			sum5=sum5+e[i];
			if(sum5>=0)
			{
			v.push_back(i);	
			break;
			}
			if(i==e.size()-1)
			{
				v.push_back(e.size());
			}
		}
//		for(int i=0;i<v.size();i++)
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
		sort(v.begin(),v.end());
		
		cout<<v[v.size()-1]<<endl;
	}
}
