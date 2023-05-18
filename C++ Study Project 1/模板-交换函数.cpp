#include<iostream>
using namespace std;

template<class T>
void mySwap_3_1(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

void test_3_1() {
	int a = 10;
	int b = 2;
	mySwap_3_1(a, b);

	cout << "a:" << a << "\tb:" << b << endl;


	char c = 'c';
	char d = 'd';
	mySwap_3_1(c, d);

	cout << "c:" << c << "\td:" << d << endl;


	mySwap_3_1<int>(a, b);
	cout << "a:" << a << "\tb:" << b << endl;


	a = 10;
	b = 20;

	//swapInt(a, b);

	//利用模板实现交换
	//1、自动类型推导
	mySwap_3_1(a, b);

	//2、显示指定类型
	mySwap_3_1<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

void main3_1() {
	test_3_1();
}