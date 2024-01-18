#include<bits/stdc++.h>
using namespace std;
class hero{
	
	int health;
	char level;
	public :
	void sethealth(int h)
	{
		health=h;
	}
	int gethealth()
	{
		return health;
	}
};
int main()
{
	hero ramesh;
	cout<<"size of ramesh is "<<sizeof(ramesh)<<endl;
	ramesh.sethealth(80);
	cout<<"ramesh health is "<<ramesh.gethealth()<<endl;
}
