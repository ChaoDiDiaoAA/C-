#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
 //2.1 ���õĻ���ʹ��

//* *���ã� * *�����������
//
//* *�﷨�� * *`�������� & ���� = ԭ��`

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