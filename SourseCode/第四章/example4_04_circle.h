#ifndef _cirle    //条件编译，避免重复包含
#define _cirle    //宏名不要与类名相同
#include<iostream>
using namespace std;
class circle
{
private:
	double radius;//定义圆的半径
	const double pi;
public:
	circle(double r = 0) :pi(3.1415926)//只能通过初始化列表初始化常数据成员
	{
		radius = r;
	}
	double area();
	double circumference();
	double getradius()const; //常成员函数，获取半径值
};

#endif 

