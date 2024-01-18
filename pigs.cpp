#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int A[q];
    for(int i=0;i<q;q++)
    {
        cin>>A[i];
    }
    for(int i=0;i<q;i++)
    {
        int z;
        if(A[i]%3==0)
        {
            z=A[i]/3;
            cout<<(n-z)*3<<endl;
        }
        else{
            z=A[i]/3;
            cout<<(n-z-1)*3<<endl;
        }

    }
    return 0;
}
