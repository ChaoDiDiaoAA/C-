#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class phone {

public:
	phone(string pname) {
		cout << "phone的构造函数调用" << endl;
		m_pname = pname;
	}
	string m_pname;
};
class person {
public:
	person(string name, string pname) :m_name(name),m_phone(pname){
		cout << "person的构造函数调用" << endl;
	}
	string m_name;
	phone m_phone;
};

void test1() {
	person p("张三", "华为");
	cout << p.m_name << endl;
	cout << p.m_phone.m_pname << endl;
}
int main() {
	test1();
}