#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void test_2_21() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	////第一种打开方式
	//char buf[1024] = { 0 };
	//while (ifs>>buf)
	//{
	//	cout << buf << endl;
	//}
	//cout << endl;

	////第二种打开方式
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}


	////第三种打开方式
	//string buf;
	//while (getline(ifs,buf))
	//{
	//	cout << buf << endl;
	//}

	//第四种

	char c;
	while (c=ifs.get()!=EOF)
	{
		cout << c;
	}
	//cout << endl;

	ifs.close();
}

void main2_21() {
	test_2_21();
}