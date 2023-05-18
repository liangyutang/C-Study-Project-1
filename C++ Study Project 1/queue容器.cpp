#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class Person3_13
{
public:
	Person3_13(string name, int age) {
		this->name = name;
		this->age = age;
	}


	void showPersion() {
		cout << "name:" << name << "\t age:" << age << endl;
	}

public:
	string name;
	int age;

private:

};

void test01_3_13() {
	queue<Person3_13> q;

	Person3_13 p1("唐僧", 30);
	Person3_13 p2("孙悟空", 1000);
	Person3_13 p3("猪八戒", 900);
	Person3_13 p4("沙僧", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小为：" << q.size() << endl;

	while (!q.empty())
	{
		cout << "队头元素:";
		q.front().showPersion();
		cout << "队尾元素:";
		q.back().showPersion();
		cout << endl;
		q.pop();
	}

	cout << "队列大小为："<<q.size() << endl;
}

int main3_13() {
	test01_3_13();
	system("pause");
	return 0;
}