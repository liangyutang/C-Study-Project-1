#include<iostream>
using namespace std;

void test01_3_8() {
	string s1;
	cout << "s1:" << s1 << endl;

	const char* str = "Hellow World";
	string s2(str);
	cout << "s2:" << s2 << endl;

	string	s3(s2);
	cout << "s3:" << s3 << endl;


	string s4(10, 'a');
	cout << "s4:" << s4 << endl;
}

void test02_3_8()
{
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);
	cout << "str5 = " << str5 << endl;


	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}

//�ַ���ƴ��
void test03_3_8()
{
	string str1 = "��";

	str1 += "������Ϸ";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;
}

//���Һ��滻
void test04_3_8()
{
	//����
	string str1 = "abcdefgde";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}


	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

void test05_3_8()
{
	//�滻
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

//�ַ����Ƚ�
void test06_3_8()
{

	string s1 = "hello";
	string s2 = "aello";

	int ret = s1.compare(s2);

	if (ret == 0) {
		cout << "s1 ���� s2" << endl;
	}
	else if (ret > 0)
	{
		cout << "s1 ���� s2" << endl;
	}
	else
	{
		cout << "s1 С�� s2" << endl;
	}

}

void test07_3_8()
{
	string str = "hello world";

	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;


	//�ַ��޸�
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;

}

//�ַ��������ɾ��
void test08_3_8()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
	cout << str << endl;
}

//�Ӵ�
void test09_3_8()
{

	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;

}


int main3_8() {
	//test01_3_8();
	//test02_3_8();
	//test03_3_8();
	//test04_3_8();
	//test05_3_8();
	//test06_3_8();
	//test07_3_8();
	//test08_3_8();
	test09_3_8();

	system("pause");
	return 0;
}