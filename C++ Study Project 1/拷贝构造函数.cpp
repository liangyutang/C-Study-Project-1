#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "�޲ι��캯��!" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "�вι��캯��!" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "�������캯��!" << endl;
		mAge = p.mAge;
	}
	//�����������ͷ��ڴ�֮ǰ����
	~Person() {
		cout << "��������!" << endl;
	}
public:
	int mAge;
};

//1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01_2_9() {

	Person man(100); //p�����Ѿ��������
	Person newman(man); //���ÿ������캯��
	Person newman2 = man; //��������

	//Person newman3;
	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
}

//2. ֵ���ݵķ�ʽ������������ֵ
//�൱��Person p1 = p;
void doWork2_9(Person p1) {}
void test02_2_9() {
	Person p; //�޲ι��캯��
	doWork2_9(p);
}

//3. ��ֵ��ʽ���ؾֲ�����
Person doWork2_2_9()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03_2_9()
{
	Person p = doWork2_2_9();
	cout << (int*)&p << endl;
}


int main2_9() {

	//test001();
	//test002();
	test03_2_9();

	system("pause");

	return 0;
}