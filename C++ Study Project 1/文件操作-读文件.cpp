#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void test_2_21() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	////��һ�ִ򿪷�ʽ
	//char buf[1024] = { 0 };
	//while (ifs>>buf)
	//{
	//	cout << buf << endl;
	//}
	//cout << endl;

	////�ڶ��ִ򿪷�ʽ
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}


	////�����ִ򿪷�ʽ
	//string buf;
	//while (getline(ifs,buf))
	//{
	//	cout << buf << endl;
	//}

	//������

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