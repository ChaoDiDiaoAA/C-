#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//构造函数分类
//按照参数分类为 有参和无参构造   无参又称为默认构造函数
//按照类型分类为 普通构造和拷贝构造
class person {
public:
	//无参（默认）构造函数
	person() {
		cout << "person构造函数的调用" << endl;
	}
	//有参构造函数
	person(int a) {
		age = a;
		cout << "person构造函数的调用!!!" << endl;
	}
	//拷贝构造函数
	person(const person& p) {
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "person构造函数的调用!!!!!!!" << endl;
	}
	//析构函数
	~person() {
		cout << "person的析构函数调用" << endl;
	}
	int age;
};

void test1() {
	//括号法
	//person p;
	//person p1(10);
	//person p2(p1);//拷贝构造函数
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//显示法
	person p;
	person p1 = person(10);
	person p2 = person(p1);  //拷贝构造
	//隐式转换发
	person p4 = 10; //相当于 person p4 = person(10);
	person p5 = p4; //拷贝构造
}
int main() {
	test1();
}