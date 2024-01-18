#include<iostream>
using namespace std;
int tab(int table[],int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i<=1)
        {
            table[i]=i;
        }
        else{
            table[i]=table[i-1]+table[i-2];
        }

    }
    return table[n];
}
int main()
{
    int n;
    cin>>n;
    int table[n];
   cout<< tab(table,n)<<endl;
   return 0;
}
