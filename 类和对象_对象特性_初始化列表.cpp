#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class person {
public:

	/*person(int a, int b, int c) {
		m_a = a;
		m_b = b;
		m_c = c;
	}*/
	//初始化列表初始化属性
	person(int a,int b,int c) :m_a(a), m_b(b), m_c(c){

	}
	int m_a;
	int m_b;
	int m_c;
};
void test1() {
	person p(10, 20, 30);
	cout << p.m_a << endl;
	cout << p.m_b << endl;
	cout << p.m_c << endl;
}
int main() {
	test1();
}