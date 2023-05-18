#include<iostream>
using namespace std;

class myAdd_3_19
{
public:
	myAdd_3_19();
	~myAdd_3_19();
	int operator()(int v1, int v2)const {
		return v1 + v2;
	}

private:

};

myAdd_3_19::myAdd_3_19()
{
}

myAdd_3_19::~myAdd_3_19()
{
}

void test1_3_19() {
	myAdd_3_19 myAdd;
	cout << myAdd(10, 10) << endl;
}


class myPrint_3_19
{
public:
	myPrint_3_19();
	~myPrint_3_19();
	int count;
	void operator()(string test) {
		cout << test << endl;
		count++;
	}
private:

};

myPrint_3_19::myPrint_3_19()
{
	count = 0;
}

myPrint_3_19::~myPrint_3_19()
{
}

void test2_3_19() {
	myPrint_3_19 p;
	p("Hello World");
	p("Hello World");
	p("Hello World");
	cout << "myPrint调用次数为：" << p.count << endl;
}

void doPrint_3_19(myPrint_3_19& mp,string test) {
	mp(test);
}

void test3_3_19() {
	myPrint_3_19 mp;
	doPrint_3_19(mp, "Hello c++");
}


int main3_19() {

	test3_3_19();

	system("pause");
	return 0;
}