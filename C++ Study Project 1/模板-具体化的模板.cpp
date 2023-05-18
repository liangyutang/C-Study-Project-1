#include<iostream>
using namespace std;

#include <string>

class Person_3_4
{
public:
	Person_3_4(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//��ͨ����ģ��
template<class T>
bool myCompare_3_4(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//���廯����ʾ���廯��ԭ�ͺͶ���˼��template<>��ͷ����ͨ��������ָ������
//���廯�����ڳ���ģ��
template<> bool myCompare_3_4(Person_3_4& p1, Person_3_4& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01_3_4()
{
	int a = 10;
	int b = 20;
	//�����������Ϳ���ֱ��ʹ��ͨ�õĺ���ģ��
	bool ret = myCompare_3_4(a, b);
	if (ret)
	{
		cout << "a == b " << endl;
	}
	else
	{
		cout << "a != b " << endl;
	}
}

void test02_3_4()
{
	Person_3_4 p1("Tom", 10);
	Person_3_4 p2("Tom", 10);
	//�Զ����������ͣ����������ͨ�ĺ���ģ��
	//���Դ������廯��Person�������͵�ģ�壬�������⴦���������
	bool ret = myCompare_3_4(p1, p2);
	if (ret)
	{
		cout << "p1 == p2 " << endl;
	}
	else
	{
		cout << "p1 != p2 " << endl;
	}
}

int main3_4() {

	test01_3_4();

	test02_3_4();

	system("pause");

	return 0;
}