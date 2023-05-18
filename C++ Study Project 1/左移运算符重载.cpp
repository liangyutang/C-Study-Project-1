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

	//成员函数 实现不了  p << cout 不是我们想要的效果
	//void operator<<(Person& p){
	//}

private:
	int m_A;
	int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个
ostream& operator<<(ostream& out, Person_2_17& p) {
	out << "a:" << p.m_A << " b:" << p.m_B;
	return out;
}

void test_2_17() {

	Person_2_17 p1(10, 20);

	cout << p1 << "hello world" << endl; //链式编程
}

int main2_17() {

	test_2_17();

	system("pause");

	return 0;
}