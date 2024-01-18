#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	cout<<"Entre the initial spped of the car in km/h"<<endl;
	float initial_speed;
	cin>>initial_speed;
	cout<<"Entre the final spped you want to reach in km/h "<<endl;
	float final_speed;
	cin>>final_speed;
	cout<<"Entre the diameter of tyre of the car in mm "<<endl;
	float diameter;
	cin>>diameter;
	cout<<"Entre the time period in which you want to reach the final speed at an constant acceletation in sec "<<endl;
	float time_period;
	cin>>time_period;
	float circumference=(3.14*diameter);
	cout<<"Circumference of the tyre is "<<circumference<<endl;
	float initial_rpm;
	initial_rpm=((initial_speed/60)*(1000)*(1000))/circumference;
	float final_rpm;
	final_rpm=((final_speed/60)*(1000)*(1000))/circumference;
	cout<<"Intial rpm of car is "<<initial_rpm<<endl;
	cout<<"Final rpm of the car is "<<final_rpm<<endl;
	cout<<"rate at which rpm change to obtain the desired speed in the given time period is "<<(final_rpm-initial_rpm)/time_period<<endl;
	return 0;
}
