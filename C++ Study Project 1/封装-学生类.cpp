#include<iostream>
using namespace std;

class Student1
{
public:
	Student1();
	~Student1();


	string name;
	string id;

	void setName(string name) {
		this->name = name;
	}

	void setId(string id) {
		this->id = id;
	}

	void showStudent() {
		cout << "name:" << this->name << "\tid:" << this->id << endl;
	}


private:

};

Student1::Student1()
{
}

Student1::~Student1()
{
}


void main2_5() {
	Student1 stu;
	stu.setName("ÁºÓñÌÃ");
	stu.setId("S211201014");
	stu.showStudent();
}