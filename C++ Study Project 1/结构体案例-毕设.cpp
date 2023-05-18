#include<iostream>
using namespace std;


struct Student
{
	string sName;
	int score;
};

struct Teacher
{
	string tName;
	struct Student students[5];
};

void addInfo(Teacher& teacher) {
	cin >> teacher.tName;
	int A = 65;
	for (int i = 0; i < 5; i++)
	{
		teacher.students[i].sName = A++;
		teacher.students[i].score= rand() % 61 + 40;
	}
}

void printStruct(Teacher teachers[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "Teacher:" << teachers[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "Student Name:" << teachers[i].students[j].sName;
			cout << "\tStudent Score:" << teachers[i].students[j].score<<endl;
		}
	}
}

void main10() {

	srand((unsigned int)time(NULL)); //随机数种子 头文件 #include <ctime>
	Teacher teacher[3];
	for (int i = 0; i < 3; i++)
	{
		addInfo(teacher[i]);
	}

	printStruct(teacher,3);
}