#include <iostream>
using namespace std;

class Person_2_8 {
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person_2_8() {
		cout << "�޲ι��캯��!" << endl;
	}
	//�вι��캯��
	Person_2_8(int a) {
		age = a;
		cout << "�вι��캯��!" << endl;
	}
	//�������캯��
	Person_2_8(const Person_2_8& p) {
		age = p.age;
		cout << "�������캯��!" << endl;
	}
	//��������
	~Person_2_8() {
		cout << "��������!" << endl;
	}
public:
	int age;
};


//2�����캯���ĵ���
//�����޲ι��캯��
void test01_2_8() {
	Person_2_8 p; //�����޲ι��캯��
}

//�����вεĹ��캯��
void test02_2_8() {

	//2.1  ���ŷ�������
	Person_2_8 p1(10);
	//ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
	//Person p2();

	//2.2 ��ʽ��
	Person_2_8 p2 = Person_2_8(10);
	Person_2_8 p3 = Person_2_8(p2);
	//Person(10)����д������������  ��ǰ�н���֮����������

	//2.3 ��ʽת����
	Person_2_8 p4 = 10; // Person p4 = Person(10); 
	Person_2_8 p5 = p4; // Person p5 = Person(p4); 

	//ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
	//Person p5(p4);
}

int main2_8() {

	//test01_2_8();
	test02_2_8();

	system("pause");

	return 0;
}