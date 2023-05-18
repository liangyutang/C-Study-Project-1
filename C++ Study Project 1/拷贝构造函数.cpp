#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "无参构造函数!" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "有参构造函数!" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "拷贝构造函数!" << endl;
		mAge = p.mAge;
	}
	//析构函数在释放内存之前调用
	~Person() {
		cout << "析构函数!" << endl;
	}
public:
	int mAge;
};

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01_2_9() {

	Person man(100); //p对象已经创建完毕
	Person newman(man); //调用拷贝构造函数
	Person newman2 = man; //拷贝构造

	//Person newman3;
	//newman3 = man; //不是调用拷贝构造函数，赋值操作
}

//2. 值传递的方式给函数参数传值
//相当于Person p1 = p;
void doWork2_9(Person p1) {}
void test02_2_9() {
	Person p; //无参构造函数
	doWork2_9(p);
}

//3. 以值方式返回局部对象
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