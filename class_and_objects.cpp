#include <bits/stdc++.h>
using namespace std;

class student{
	public:
	int A[5];
	void input()
	{
		for(int i=0;i<5;i++)
		{
			cin>>A[i];
		}
	}
	void output()
	{
		for(int i=0;i<5;i++)
		{
			cout<<A[i]<<endl;
		}
	}
	int total_score()
	{
		int total=0;
		for(int i=0;i<5;i++)
		{
			total=total+A[i];
		}
		return total;
	}
};
int main(){
	student st;
	st.input();
	st.output();
	int total=st.total_score();
	cout<<total;
	return 0;
	
}
