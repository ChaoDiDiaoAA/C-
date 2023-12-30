#pragma once
#include<iostream>
using namespace std;
#include "point.h"
class circle {
public:
	//设置半径
	void setr(int r);
	//获取半径
	int getr();
	//设置圆心
	void setcenter(point center);
	//获取圆心
	point getcenter();

private:
	int m_r;
	point m_center;
};