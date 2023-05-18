#include<iostream>
using namespace std;

template<class NameType,class AgeType>
class Person_3_5
{
public:
	Person_3_5(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	void showPersion() {
		cout << "name:" << name << "\t age:" << age << endl;
	}

public:
	NameType name;
	AgeType age;

private:

};

void test_3_5() {
	Person_3_5<string, int> p1("ÁºÓñÌÃ", 26);
	p1.showPersion();
}

int main3_5() {
	test_3_5();
	system("pause");
	return 0;
}