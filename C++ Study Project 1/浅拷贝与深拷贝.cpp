#include<iostream>
using namespace std;


class Person03 {
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person03() {
		cout << "�޲ι��캯��!" << endl;
	}
	//�вι��캯��
	Person03(int age, int height) {

		cout << "�вι��캯��!" << endl;

		m_age = age;
		m_height = new int(height);

	}
	//�������캯��  
	Person03(const Person03& p) {
		cout << "�������캯��!" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		m_age = p.m_age;
		m_height = new int(*p.m_height);

	}

	//��������
	~Person03() {
		cout << "��������!" << endl;
		//if (m_height != NULL)
		//{
		//	delete m_height;
		//	m_height = NULL;
		//}
	}
public:
	int m_age;
	int* m_height;
};

void test01_2_11()
{
	Person03 p1(18, 180);

	Person03 p2(p1);

	cout << "p1�����䣺 " << p1.m_age << " ��ߣ� " << *p1.m_height << endl;

	cout << "p2�����䣺 " << p2.m_age << " ��ߣ� " << *p2.m_height << endl;
}

int main2_11() {

	test01_2_11();

	system("pause");

	return 0;
}