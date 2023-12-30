#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//立方体类设计
//1、创建立方体类
//2、设计属性和行为
//3、获取立方体的面积和体积
//4、分别利用全局函数和成员函数 判断两个立方体是否相等
class cube
{
public:
	//设置长
	void setl(int l) {
		m_l = l;
	}
	//获取长
	int getl() {
		return m_l;
	}
	//设置宽
	void setw(int w) {
		m_w = w;
	}
	//获取宽
	int getw() {
		return m_w;
	}
	//设置高
	void seth(int h) {
		m_h = h;
	}
	//获取高
	int geth() {
		return m_h;
	}
	//获取立方体面积
	int gets() {
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
	}
	//获取立方体体积
	int getv() {
		return m_h * m_l * m_w;
	}
	//利用成员函数判断两个立方体是否相等
	bool issameclass(cube& c) {
		if (m_h == c.geth() && m_l == c.getl() && m_w == c.getw()) {
			return true;
		}
		return false;
	}
private:
	int m_l;
	int m_w;
	int m_h;
};

//利用全局函数判断 两个立方体是否相等
bool issame(cube& c1, cube& c2) {
	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw()) {
		return true;
	}
	return false;
}

int main() {
	cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);
	cout << "S:" << c1.gets() << endl;
	cout << "V:" << c1.getv() << endl;

	cube c2;
	c2.setl(10);
	c2.setw(10);
	c2.seth(11);

	//全局函数判断
	/*if (issame(c1, c2)) {
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2是不相等的" << endl;
	}*/

	//成员函数判断
	bool ret = c1.issameclass(c2);
	if (ret) {
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2是不相等的" << endl;
	}
}
