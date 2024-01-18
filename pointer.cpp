#include<iostream>
using namespace std;
int ab=2;
int f[]={100,200,300,400,500};
int sum(int a,int b)
{
	return a+b;
}
void arr(int a[])
{
	a[0]=100;
	cout<<f[2]<<endl;
}
int subtract(int a,int b)

{
	return a-b;
}
int main()
{
	int a=3;
	int* b=&a;
	cout<<"the address of a is "<<b<<endl;
	cout<<"the address of a is "<<&a<<endl;
	cout<<"the value at addrtess b is "<<*b<<endl;
	// pointer to pointer 
	int**c=&b;
	cout<<" the val;ue at a is "<<**c<<endl;
	cout<<"the addres sof b is <<"<<c<<endl;
	cout<<"the value stored at b is"<<*c<<endl;
	int e[5];
	for(int i=0;i<5;i++)
	{
		cin>>e[i];
	}
	int *p;
	p=e;

	cout<<*p<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*(p+i)<<endl;
	}
	int (*t)(int,int );
	int (*o)(int,int);
	t=&sum;
	o=&subtract;
	cout<<(*t)(2,3)<<endl;
	arr(e);
	cout<<e[0]<<endl;
	
	return 0;
}
