#include<iostream>

using namespace std;

#include"example4_04_circle.h"

int main()
{
	circle c1(3.5), c2;//c2的半径使用默认值
	cout << "radius of c1=" << c1.getradius();
	cout << ",area of c1=" << c1.area() << ",circumference of c1=" << c1.circumference() << endl;
	cout<<"radius of c2=" << c2.getradius();
	cout << ",area of c2=" << c2.area() << ",circumference of c2=" << c2.circumference() << endl;
	
	system("pause");
	return 0;
}