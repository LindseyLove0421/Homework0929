#ifndef _cirle    //�������룬�����ظ�����
#define _cirle    //������Ҫ��������ͬ
#include<iostream>
using namespace std;
class circle
{
private:
	double radius;//����Բ�İ뾶
	const double pi;
public:
	circle(double r = 0) :pi(3.1415926)//ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա
	{
		radius = r;
	}
	double area();
	double circumference();
	double getradius()const; //����Ա��������ȡ�뾶ֵ
};

#endif 

