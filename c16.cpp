#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	float height,inc,cent;
	cout<<"enter height in inches"<<endl;
	cin>>inc;
	cent=height*2.54;
	cout<<"your height in centimeters is"<<cent<<endl;
	cout<<setprecision(2)<<cent;
	
}