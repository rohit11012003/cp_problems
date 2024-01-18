#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	stringstream s;
	char ch;
	vector <int> v;
	s<<str;
	int temp;
	 while(s>>temp)
	 {
	 	v.push_back(temp);
	 	s>>ch;
	 }
	 for(int i=0;i!=v.size();i++)
	 {
	 	cout<<v[i]<<endl;
	 }
	return 0;
	
}
