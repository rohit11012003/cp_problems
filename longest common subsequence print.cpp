#include<bits/stdc++.h>
using namespace std;
vector<char>v;
void print(vector<char> v1)
{
	cout<<v1.size()<<endl;
}
int fun(string s1,string s2, int i, int j, int count)
{
    if(i<0||j<0)
    {
        return count;
    }
    else{
        if(s1[i]==s2[j])
        {
            
            v.push_back(s1[i]);
            print(v);
            return fun(s1,s2,i-1,j-1,count+1);
        }
        else{
            return max( fun(s1,s2,i-1,j,count),fun(s1,s2,i,j-1,count));
        }
    }
}
int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    int count=0;
    cout<< "maxium lenght of substring is "<<fun(s1,s2,n1-1,n2-1,count)<<endl;
    cout<<"the maxium longest common subsequence is "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    return 0;


}
