#pragma once
#include<iostream>
using namespace std;


//template<class NameType, class AgeType>
class Person1
{
public:
	Person1(string name, int age) {
		this->name = name;
		this->age = age;
	}

	Person1() {
	}

	void showPersion() {
		cout << "name:" << name << "\t age:" << age << endl;
	}

public:
	string name;
	int age;

private:

};