#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
#include "circle.h"
#include "point.h"
//class point {
//public:
//	//����x
//	void setx(int x) {
//		m_x = x;
//	 }
//	//��ȡx
//	int getx() {
//		return m_x;
//	}
//	//����y
//	void sety(int y) {
//		m_y = y;
//	}
//	//��ȡy
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
//	//���ð뾶
//	void setr(int r) {
//		m_r = r;
//	}
//	//��ȡ�뾶
//	int getr() {
//		return m_r;
//	}
//	//����Բ��
//	void setcenter(point center) {
//		m_center = center;
//	}
//	//��ȡԲ��
//	point getcenter() {
//		return m_center;
//	}
//
//private:
//	int m_r;
//	point m_center;
//};

//�жϵ��Բ�Ĺ�ϵ
void isincircle(circle& c, point& p) {
	//��������֮������ƽ��
	int distance = 
		(c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//����뾶��ƽ��
	int rdistance = c.getr() * c.getr();
	//�жϹ�ϵ
	if (distance == rdistance) {
		cout << "����Բ��" << endl;
	}
	else if(distance > rdistance){
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
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