#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//C++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��
//�﷨�� * *`����ֵ���� ������(��������) {}`
//���ֽ׶κ�����ռλ�����������岻�󣬵��Ǻ���Ŀγ��л��õ��ü���
//����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���
void func(int a, int) {
	cout << "this is func" << endl;
}

int main() {

	func(10, 10); //ռλ���������

	system("pause");

	return 0;
}