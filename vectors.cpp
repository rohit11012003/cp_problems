#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,q;
   cin>>n>>q;
  vector<int> A[n];
  for(int i=0;i<n;i++)
  {
      int q;
      int r=0;
      cin>>q;
      while(r!=q)
      {
          int x;
          cin>>x;
          A[i].push_back(x);
          r++;
      }
      
  }
  for(int x=0;x<q;x++)
  {
      int i,j;
      cin>>i>>j;
      cout<<A[i][j];
      
  }
  
      
    return 0;
}


