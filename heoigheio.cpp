#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    for(int i=0;i<5;i++){
    double l1,l2,t1,t2;
    cin>>l1>>l2>>t1>>t2;
    double teta;
    teta=((l1*2*10)/(164))+((l2*2*10)/(172));
    double mew;
    mew=log(t1/t2)/teta;
    cout<<"tete= "<<teta<<" mew= "<<mew<<endl;}
    return 0;

}
