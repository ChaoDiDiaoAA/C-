#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//�������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ�������֣�
//1. public        ����Ȩ��
//2. protected ����Ȩ��
//3. private      ˽��Ȩ��
//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���
class Person
{
	//����  ����Ȩ��
public:
	string m_Name;

	//����  ����Ȩ��
protected:
	string m_Car;

	//���п�����  ˽��Ȩ��
private:
	int m_Password;

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main() {

	Person p;
	p.m_Name = "����";
	//p.m_Car = "����";  //����Ȩ��������ʲ���
	//p.m_Password = 123; //˽��Ȩ��������ʲ���

	system("pause");

	return 0;
}