#include<bits/stdc++.h>
#include<math.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
 
int main()
{
	
		set<int> s1;
	set<int> s2;
	int n=2e5+7;
	for(int i=1;i<=n;i++)
	{
		s1.insert(i);
	}
	for(int i=1;i<=n;i++)
	{
		s2.insert(i);
	}
	auto start = high_resolution_clock::now();
	for(int i=0;i<2e5+7;i++)
	{
		int mi=1;
		int ma=2e5+7;
		int x,y;
		x=rand();
		y=rand();
		auto it1=s1.find(x);
		auto it2=s2.find(y);
		if(it1!=s1.end())
		{
			s1.erase(it1);
		}
		if(it2!=s2.end())
		{
			s2.erase(it2);
		}
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
         
}
