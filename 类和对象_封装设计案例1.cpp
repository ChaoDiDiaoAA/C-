#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//�����������
//1��������������
//2��������Ժ���Ϊ
//3����ȡ���������������
//4���ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
class cube
{
public:
	//���ó�
	void setl(int l) {
		m_l = l;
	}
	//��ȡ��
	int getl() {
		return m_l;
	}
	//���ÿ�
	void setw(int w) {
		m_w = w;
	}
	//��ȡ��
	int getw() {
		return m_w;
	}
	//���ø�
	void seth(int h) {
		m_h = h;
	}
	//��ȡ��
	int geth() {
		return m_h;
	}
	//��ȡ���������
	int gets() {
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
	}
	//��ȡ���������
	int getv() {
		return m_h * m_l * m_w;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool issameclass(cube& c) {
		if (m_h == c.geth() && m_l == c.getl() && m_w == c.getw()) {
			return true;
		}
		return false;
	}
private:
	int m_l;
	int m_w;
	int m_h;
};

//����ȫ�ֺ����ж� �����������Ƿ����
bool issame(cube& c1, cube& c2) {
	if (c1.geth() == c2.geth() && c1.getl() == c2.getl() && c1.getw() == c2.getw()) {
		return true;
	}
	return false;
}

int main() {
	cube c1;
	c1.setl(10);
	c1.setw(10);
	c1.seth(10);
	cout << "S:" << c1.gets() << endl;
	cout << "V:" << c1.getv() << endl;

	cube c2;
	c2.setl(10);
	c2.setw(10);
	c2.seth(11);

	//ȫ�ֺ����ж�
	/*if (issame(c1, c2)) {
		cout << "c1��c2����ȵ�" << endl;
	}
	else {
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}*/

	//��Ա�����ж�
	bool ret = c1.issameclass(c2);
	if (ret) {
		cout << "c1��c2����ȵ�" << endl;
	}
	else {
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}
}
