#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		vector<int> ind;
		vector<int> ind1;
		int p=0;
		int z=0;
		for(int i=0;i<n;i++)
		
		{
			
			for(int j=1;j<m;j++)
			{
				if(a[i][j]<a[i][j-1])
				{
					ind1.push_back(j-1);
					ind.push_back(j);
					p++;
				}
			}
			if(p==2)
			{
				cout<<"FSr";
				cout<<i<<" "<<ind.size()<<endl;
				if(i!=0||ind.size()!=2)
				{
					cout<<-1<<endl;
					z=1;
					break;
				}
				else{
					cout<<"hwllo"<<endl;
					for(int i=0;i<n;i++)
					{
						cout<<a[i][ind1[0]]<<" "<<a[i][ind[1]]<<endl;
						swap(a[i][ind1[0]],a[i][ind[1]]);
						cout<<a[i][ind1[0]]<<" "<<a[i][ind[1]]<<endl;
					}
				}
			}
			if(p>2)
			{
				cout<<-1<<endl;
				break;
			}
		}
		if(p==0)
		{
			cout<<1<<" "<<1<<endl;
		}
		else if(p==1&&z==0)
		{
			cout<<ind1[0]+1<<" "<<ind[1]<<endl;
		}
	}
	return 0;
}
