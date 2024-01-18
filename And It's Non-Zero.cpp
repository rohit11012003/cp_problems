#include<bits/stdc++.h>
using namespace std;
//void printbinary(int j)
//{
//	for(int i=31;i>=0;i--)
//	{
//		cout<<((j>>i)&1);
//	}
//	cout<<endl;
//}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int numodd;
		int l,r;
		
		cin>>l>>r;
		int g=l;
		if(l%2==0&&r%2==0)
		{
			numodd=(r-l)/2;
		}
		else if(l%2!=0&&r%2!=0)
		{
			numodd=(r-l)/2;
			numodd++;
		}
		else{
			numodd=(r-l)/2;
			numodd++;
		}
		vector<int> v;
		for(int i=0;i<32;i++)
		{
			int t=1;
			if(l>=pow(2,i)&&r<pow(2,i+1))
			{
				v.push_back(r-l+1);
				t=1;
			}
			if(pow(2,i)>=l&&pow(2,i)<=r)
			{
				if(pow(2,i+1)>r)
				{
					v.push_back(pow(2,i)-l);
					v.push_back(r-pow(2,i)+1);
					t=0;
				}
				else if(pow(2,i+1)==r)
				{
					v.push_back(pow(2,i)-l);
					v.push_back(r-pow(2,i));
					v.push_back(1);
					t=0;
				}
				else{
					if(pow(2,i+1)<r)
					{
						v.push_back(pow(2,i+1)-pow(2,i));
						l=pow(2,i+1);
					}
				}
			}
			if(t==0)
			{
				break;
			}
		}
		cout<<numodd<<endl;
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		sort(v.begin(),v.end(), greater<int>());
		if(numodd>v[0])
		{
			cout<<(r-g+1)-numodd<<endl;
		}
		else{
//			cout<<v[0]<<"XS"<<endl;
//			cout<<r<<" "<<g<<endl;
			cout<<(r-g+1)-v[0]<<endl;
		}
	}
	return 0;
	
}
