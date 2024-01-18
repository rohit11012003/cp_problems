#include<iostream>
using namespace std;
int number(int i)
{
    int j=1;
 int k=1;
 while(k!=i)
 {
     if(j/3==0||j%10==3)
     {
         j++;
     }
     else
     {
         j++;
         k=j;
        
     }
 }return k;

}
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<number(a[i])<<endl;
    }
    return 0;
    

}
