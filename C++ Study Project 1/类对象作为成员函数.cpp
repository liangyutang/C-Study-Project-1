#include<iostream>
using namespace std;

class Phone_2_12
{
public:
	Phone_2_12(string name)
	{
		m_PhoneName = name;
		cout << "Phone构造" << endl;
	}

	~Phone_2_12()
	{
		cout << "Phone析构" << endl;
	}

	string m_PhoneName;

};


class Person_2_12
{
public:

	//初始化列表可以告诉编译器调用哪一个构造函数
	Person_2_12(string name, string pName) :m_Name(name), m_Phone(pName)
	{
		cout << "Person构造" << endl;
	}

	~Person_2_12()
	{
		cout << "Person析构" << endl;
	}

	void playGame()
	{
		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
	}

	string m_Name;
	Phone_2_12 m_Phone;

};
void test01_2_12()
{
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
	Person_2_12 p("张三", "苹果X");
	p.playGame();

}


int main2_12() {

	test01_2_12();

	system("pause");

	return 0;
}