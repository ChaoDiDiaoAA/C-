#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//���캯������
//���ղ�������Ϊ �вκ��޲ι���   �޲��ֳ�ΪĬ�Ϲ��캯��
//�������ͷ���Ϊ ��ͨ����Ϳ�������
class person {
public:
	//�޲Σ�Ĭ�ϣ����캯��
	person() {
		cout << "person���캯���ĵ���" << endl;
	}
	//�вι��캯��
	person(int a) {
		age = a;
		cout << "person���캯���ĵ���!!!" << endl;
	}
	//�������캯��
	person(const person& p) {
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "person���캯���ĵ���!!!!!!!" << endl;
	}
	//��������
	~person() {
		cout << "person��������������" << endl;
	}
	int age;
};

void test1() {
	//���ŷ�
	//person p;
	//person p1(10);
	//person p2(p1);//�������캯��
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//��ʾ��
	person p;
	person p1 = person(10);
	person p2 = person(p1);  //��������
	//��ʽת����
	person p4 = 10; //�൱�� person p4 = person(10);
	person p5 = p4; //��������
}
int main() {
	test1();
}