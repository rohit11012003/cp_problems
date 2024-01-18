#include<iostream>
using namespace std;
int number(int i)
{
    int j=2;
 int k=1;
 while(k!=j)
 {
     if(j/3==0||j%10==3)
     {
         j++;
     }
     else
     {
        
        
         k=j;
         j++;
        
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
    for(int j=0;j<t;j++)
    {
        cout<<"hello"<<endl;
        cout<<number(a[j])<<endl;
    }
    return 0;
    

}
