#include<iostream>
using namespace std;

class Phone_2_12
{
public:
	Phone_2_12(string name)
	{
		m_PhoneName = name;
		cout << "Phone����" << endl;
	}

	~Phone_2_12()
	{
		cout << "Phone����" << endl;
	}

	string m_PhoneName;

};


class Person_2_12
{
public:

	//��ʼ���б���Ը��߱�����������һ�����캯��
	Person_2_12(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person����" << endl;
	}

	~Person_2_12()
	{
		cout << "Person����" << endl;
	}

	void playGame()
	{
		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
	}

	string m_Name;
	Phone_2_12 m_Phone;

};
void test01_2_12()
{
	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	//����˳���빹���෴
	Person_2_12 p("����", "ƻ��X");
	p.playGame();

}


int main2_12() {

	test01_2_12();

	system("pause");

	return 0;
}