#include<iostream>
using namespace std;

class Person_2_17 {
	friend ostream& operator<<(ostream& out, Person_2_17& p);

public:

	Person_2_17(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}

	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ��
ostream& operator<<(ostream& out, Person_2_17& p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test_2_17() {

	Person_2_17 p1(10, 20);

	cout << p1 << "hello world" << endl; //��ʽ���
}

int main2_17() {

	test_2_17();

	system("pause");

	return 0;
}