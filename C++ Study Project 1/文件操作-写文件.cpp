#include<iostream>
#include<fstream>
using namespace std;

void test_2_20() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	ofs << "������������" << endl;
	ofs << "���䣺26" << endl;
	ofs << "�Ա�: ��" << endl;

	ofs.close();
}

void main2_20() {
	test_2_20();
}