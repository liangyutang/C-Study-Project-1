#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void test1_3_16() {
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(10);
	printSet(s1);

	set<int> s2(s1);
	printSet(s2);

	set<int> s3;
	s3 = s2;
	printSet(s3);
}

//��С
void test2_3_16()
{

	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
	}

}

//����
void test3_3_16()
{
	set<int> s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "����ǰ" << endl;
	printSet(s1);
	printSet(s2);
	cout << endl;

	cout << "������" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

//�����ɾ��
void test4_3_16()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);

	//ɾ��
	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(30);
	printSet(s1);

	//���
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

//���Һ�ͳ��
void test5_3_16()
{
	set<int> s1;
	//����
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//����
	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	cout << "num = " << num << endl;
}

//set��multiset����
void test6_3_16()
{
	set<int> s;
	pair<set<int>::iterator, bool>  ret = s.insert(10);
	if (ret.second) {
		cout << "��һ�β���ɹ�!" << endl;
	}
	else {
		cout << "��һ�β���ʧ��!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�!" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��!" << endl;
	}

	//multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test7_3_16() {
	pair<string, int> p(string("Tom"), 20);
	cout << "name��" << p.first << "\tage:" << p.second << endl;
	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "name��" << p2.first << "\tage:" << p2.second << endl;
}

class myCompare3_16
{
public:
	bool operator()(int v1, int v2)const {
		return v1 > v2;
	}
};

void test8_3_16() {
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	//printSet(s1);

	set<int, myCompare3_16> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);

	for (set<int,myCompare3_16>::const_iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

}


class Person3_16
{
public:
	Person3_16(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;

};
class comparePerson3_16
{
public:
	bool operator()(const Person3_16& p1, const Person3_16& p2)const
	{
		//���������������  ����
		return p1.m_Age > p2.m_Age;
	}
};

void test9_3_16() {
	set<Person3_16, comparePerson3_16> s;
	Person3_16 p1("����", 23);
	Person3_16 p2("����", 27);
	Person3_16 p3("�ŷ�", 25);
	Person3_16 p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person3_16,comparePerson3_16>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "name:" << it->m_Name << "\tage:" << it->m_Age << endl;
	}
}

int main3_16() {
	test9_3_16();

	system("pause");
	return 0;
}