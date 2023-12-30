#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
#include "circle.h"
#include "point.h"
//class point {
//public:
//	//设置x
//	void setx(int x) {
//		m_x = x;
//	 }
//	//获取x
//	int getx() {
//		return m_x;
//	}
//	//设置y
//	void sety(int y) {
//		m_y = y;
//	}
//	//获取y
//	int gety() {
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};
//class circle {
//public:
//	//设置半径
//	void setr(int r) {
//		m_r = r;
//	}
//	//获取半径
//	int getr() {
//		return m_r;
//	}
//	//设置圆心
//	void setcenter(point center) {
//		m_center = center;
//	}
//	//获取圆心
//	point getcenter() {
//		return m_center;
//	}
//
//private:
//	int m_r;
//	point m_center;
//};

//判断点和圆的关系
void isincircle(circle& c, point& p) {
	//计算两点之间距离的平方
	int distance = 
		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//计算半径的平方
	int rdistance = c.getr() * c.getr();
	//判断关系
	if (distance == rdistance) {
		cout << "点在圆上" << endl;
	}
	else if(distance > rdistance){
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
}

int main() {
	circle c;
	c.setr(10);
	point center;
	center.setx(10);
	center.sety(0);
	c.setcenter(center);

	point p;
	p.setx(10);
	p.sety(10);


	isincircle(c, p);
}