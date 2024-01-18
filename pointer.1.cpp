#include<iostream>
#include<cmath>


//	int a;
//	cin>>a;
//	cout<<a<<"first"<<endl;
//	int* b;
//	b=&a;
//	*b=20;
//	cout<<"Address of a is "<<b<<endl;
//	cout<<a<<endl;

using namespace std;

void update(int *a,int *b) {
	int z=*a;
    *a=((*a)+(*b));
    *b= ((z)-(*b));
    cout<<*a<<endl;
    cout<<abs(*b)<<endl;
    
}

int main() {
   int a,b;
   cin>>a;
   cin>>b;
   update(&a,&b);

    return 0;
}
