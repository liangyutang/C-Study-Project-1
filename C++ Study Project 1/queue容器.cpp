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

	Person3_13 p1("��ɮ", 30);
	Person3_13 p2("�����", 1000);
	Person3_13 p3("��˽�", 900);
	Person3_13 p4("ɳɮ", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�СΪ��" << q.size() << endl;

	while (!q.empty())
	{
		cout << "��ͷԪ��:";
		q.front().showPersion();
		cout << "��βԪ��:";
		q.back().showPersion();
		cout << endl;
		q.pop();
	}

	cout << "���д�СΪ��"<<q.size() << endl;
}

int main3_13() {
	test01_3_13();
	system("pause");
	return 0;
}