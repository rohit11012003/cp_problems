#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x=0;
    for(int i=0;i<13;i++)
    {
        int del=10;
        double alpha_2=(cos(del*M_PI/180)*(pow(sin(del*M_PI/180),2))*sin((2*x)*M_PI/180))/(pow(1-(pow(sin(x*M_PI/180),2)*pow(sin(del*M_PI/180),2)),2));
        cout<<" alpha_2 ="<<alpha_2<<endl;
       
        x=x+30;

    }
}
