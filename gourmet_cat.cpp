#include<bits/stdc++.h>
using namespace std;
int main()
{
    
      int a,b,c;
      cin>>a>>b>>c;
      int a1=a/3;
      int b1=b/2;
      int c1=c/2;
      int a2=a%3;
      int b2=b%2;
      int c2=c%2;
      a1=a1*7;
      b1=b1*7;
      c1=c1*7;
      if(a2==1)
      {
        //a1=a1*7;
        a1=a1+5;
      }
      else if(a2==2)
      {
        a1=a1+6;
      }
      if(b2==1)
      {
        b1=b1+6;
      }
      if(c2==1)
      {
        c1=c1+6;
      }
      cout<<min(a1,min(b1,c1))<<endl;
    }

    
