#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//�������Զ�Σ�����ֻ��һ��
//����
int max(int a, int b);
int max(int a, int b);
//����
int max(int a, int b)
{
	return a > b ? a : b;
}
int test04(int a, int b)
{
	cout << "this is test04 " << endl;
	int sum = a + b;
	return sum;
}
int main() {

	int a = 100;
	int b = 200;
	int sum = test04(a, b);
	cout << sum << endl;
	cout << max(a, b) << endl;

	system("pause");

	return 0;
}