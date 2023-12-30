#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//对象的初始化和清理
//构造函数 进行初始化操作
class person {
public:
	//构造函数没有返回值，也不用写void，函数名与类名相同，可以有参数，可以发生重载
	//创建对象时，构造函数会自动调用，而且只调用一次
	person() {
		cout << "person构造函数的调用" << endl;
	}

	//析构函数 进行清理操作
	//没有返回值  不写void
	//函数名和类名相同 在名称前加 ~
	//析构函数不可以有参数的，不可以发生重载
	//对象在销毁前 会自动调用析构函数，而且只会调用一次
	~person() {
		cout << "person的析构函数调用" << endl;
	}

};


void test1() {
	person p;
}

int main() {
	test1();
}