#include<iostream>
#include<fstream>
using namespace std;

void test_2_20() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	ofs << "姓名：梁玉堂" << endl;
	ofs << "年龄：26" << endl;
	ofs << "性别: 男" << endl;

	ofs.close();
}

void main2_20() {
	test_2_20();
}