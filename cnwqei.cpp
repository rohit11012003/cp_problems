#include<bits/stdc++.h>
using namespace std;
//rohit choudhary
int main()
{int p;
cin>>p;
while(p--)
{int n,m,k,g=0,y=0;
cin>>n>>m>>k;
string a,b,s2="";
cin>>a>>b;
sort(a.begin(),a.end());
//jibdsiujnvijsd

sort(b.begin(),b.end());
while(a.length()!=0 && b.length()!=0)
{for(int i=0;a.length()>0 && b.length()>0;)
{if(a[i]>=b[i] && g<k)
{s2=s2+b[i];
b.erase(b.begin());
g++;
y=0;
}
else if(y<k && a[i]<=b[i])
{s2=s2+a[i];
a.erase(a.begin());
y++;
g=0;
}
else if(g<k)
{s2=s2+b[i];
b.erase(b.begin());
g++;
y=0;
}
else if(y<k)
{s2=s2+a[i];
a.erase(a.begin());
y++;
g=0;
}
}
}
cout<<s2<<endl;
}
}
