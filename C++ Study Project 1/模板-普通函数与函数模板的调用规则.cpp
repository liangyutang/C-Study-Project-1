#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ����ù���
void myPrint_3_3(int a, int b)
{
	cout << "���õ���ͨ����" << endl;
}

template<typename T>
void myPrint_3_3(T a, T b)
{
	cout << "���õ�ģ��" << endl;
}

template<typename T>
void myPrint_3_3(T a, T b, T c)
{
	cout << "�������ص�ģ��" << endl;
}

void test01_3_3()
{
	//1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
	// ע�� ������߱�����  ��ͨ�������еģ���ֻ������û��ʵ�֣����߲��ڵ�ǰ�ļ���ʵ�֣��ͻᱨ���Ҳ���
	int a = 10;
	int b = 20;
	myPrint_3_3(a, b); //������ͨ����

	//2������ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
	myPrint_3_3<>(a, b); //���ú���ģ��

	//3������ģ��Ҳ���Է�������
	int c = 30;
	myPrint_3_3(a, b, c); //�������صĺ���ģ��

	//4�� �������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint_3_3(c1, c2); //���ú���ģ��
}

int main3_3() {

	test01_3_3();

	system("pause");

	return 0;
}