#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
 //2.1 引用的基本使用

//* *作用： * *给变量起别名
//
//* *语法： * *`数据类型 & 别名 = 原名`

int main() {

	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}