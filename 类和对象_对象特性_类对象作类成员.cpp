#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class phone {

public:
	phone(string pname) {
		cout << "phone�Ĺ��캯������" << endl;
		m_pname = pname;
	}
	string m_pname;
};
class person {
public:
	person(string name, string pname) :m_name(name),m_phone(pname){
		cout << "person�Ĺ��캯������" << endl;
	}
	string m_name;
	phone m_phone;
};

void test1() {
	person p("����", "��Ϊ");
	cout << p.m_name << endl;
	cout << p.m_phone.m_pname << endl;
}
int main() {
	test1();
}