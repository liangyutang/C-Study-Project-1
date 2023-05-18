#include<iostream>
using namespace std;

class Base_2_19
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son_2_19 :public Base_2_19
{
public:
	int m_D;
};

void test01_2_19()
{
	cout << "sizeof Son = " << sizeof(Son_2_19) << endl;
}

int main2_19() {

	test01_2_19();

	system("pause");

	return 0;
}