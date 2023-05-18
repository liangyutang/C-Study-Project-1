#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class Person13_15
{
public:
	Person13_15(string name, int age,int height);
	~Person13_15();

	void showPersion() {
		cout << "name:" << name << "\t age:" << age <<"\theight:"<<height<< endl;
	}

	string name;
	int age;
	int height;
};

Person13_15::Person13_15(string name, int age, int height)
{
	this->name = name;
	this->age = age;
	this->height = height;
}

Person13_15::~Person13_15()
{
}

bool comparePerson(Person13_15& p1, Person13_15& p2) {
	if (p1.age==p2.age)
	{
		return p1.height > p2.height;
	}
	else
	{
		return p1.age > p2.age;
	}
}


void test1_3_15() {
	list<Person13_15> l;
	//Person3_15 p1("")
	Person13_15 p1("刘备", 35, 175);
	Person13_15 p2("曹操", 45, 180);
	Person13_15 p3("孙权", 40, 170);
	Person13_15 p4("赵云", 25, 190);
	Person13_15 p5("张飞", 35, 160);
	Person13_15 p6("关羽", 35, 200);

	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	for (list<Person13_15>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名： " << it->name << " 年龄： " << it->age << " 身高： " << it->height << endl;
			
	}

	cout << "---------------------------------" << endl;

	l.sort(comparePerson);

	for (list<Person13_15>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名： " << it->name << " 年龄： " << it->age << " 身高： " << it->height << endl;

	}
}

int main3_15() {
	test1_3_15();

	system("pause");
	return 0;
}