#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v1;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<k;j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        v1.push_back(v);
    }
    

}