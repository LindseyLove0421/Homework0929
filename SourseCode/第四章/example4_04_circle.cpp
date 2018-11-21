#include"example4_04_circle.h"
#include<iostream>
using namespace std;

double circle::area()
{
	double a = getradius();
	return pi * radius*radius;


}
double circle::circumference()
{
	
	return 2 * pi*radius;

}
double circle::getradius()const
{
	
	return radius;
}