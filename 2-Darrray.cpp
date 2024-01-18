#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];


        }
    }
    for(int k=0;k<n;k++)
    {
        for(int e=0;e<m;e++)
        {
            cout<<A[k][e]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
