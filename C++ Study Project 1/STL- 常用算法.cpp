#include<iostream>
#include<algorithm>
#include<functional>
#include<numeric>
#include<vector>
#include<ctime>
using namespace std;

void print1_3_22(int val) {
	cout << val << "\t";
}


class print2_3_22
{
public:
	print2_3_22();
	~print2_3_22();
	void operator()(int val)const {
		cout << val << "\t";
	}

private:

};

print2_3_22::print2_3_22()
{
}

print2_3_22::~print2_3_22()
{
}

class myTransform_3_22
{
public:
	myTransform_3_22();
	~myTransform_3_22();
	int operator()(int val)const {
		return val;
	}

private:

};

myTransform_3_22::myTransform_3_22()
{
}

myTransform_3_22::~myTransform_3_22()
{
}


void test1_3_22() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), print1_3_22);
	cout << endl;

	for_each(v.begin(), v.end(), print2_3_22());
	cout << endl;
}

void test2_3_22() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), myTransform_3_22());

	for_each(v2.begin(), v2.end(), print2_3_22());
	cout << endl;
}

void test3_3_22() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos==v.end())
	{
		cout << "not find." << endl;
	}
	else
	{
		cout << "find:" << *pos << endl;
	}
}


class Person_3_22
{
public:
	Person_3_22(string name,int age);
	~Person_3_22();

	bool operator==(const Person_3_22& p) {
		if (!this->name.compare(p.name) && this->age == p.age)
		{
			return true;
		}
		else {
			return false;
		}
	}

	string name;
	int age;
private:

};

Person_3_22::Person_3_22(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person_3_22::~Person_3_22()
{
}

void test4_3_22() {
	vector<Person_3_22> v;

	//创建数据
	Person_3_22 p1("aaa", 10);
	Person_3_22 p2("bbb", 20);
	Person_3_22 p3("ccc", 30);
	Person_3_22 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person_3_22>::iterator it = find(v.begin(), v.end(), p2);
	if (it==v.end())
	{
		cout << "not find!" << endl;
	}
	else
	{
		cout << "find-name:" << it->name<<"\t age:"<<it->age << endl;
	}
}


class greateFive_3_22
{
public:
	greateFive_3_22();
	~greateFive_3_22();

	bool operator()(int val)const {
		return val > 5;
	}
private:

};

greateFive_3_22::greateFive_3_22()
{
}

greateFive_3_22::~greateFive_3_22()
{
}

void test5_3_22() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), greateFive_3_22());
	if (it==v.end())
	{
		cout << "not find!" << endl;
	}
	else
	{
		cout << "find dayu 5:	" << *it << endl;
	}
}

class Greater_3_22
{
public:
	Greater_3_22();
	~Greater_3_22();
	bool operator()(Person_3_22& p) {
		return p.age > 20;
	}

private:

};

Greater_3_22::Greater_3_22()
{
}

Greater_3_22::~Greater_3_22()
{
}

void test6_3_22() {
	vector<Person_3_22> v;

	//创建数据
	Person_3_22 p1("aaa", 10);
	Person_3_22 p2("bbb", 20);
	Person_3_22 p3("ccc", 30);
	Person_3_22 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person_3_22>::iterator it = find_if(v.begin(), v.end(), Greater_3_22());
	if (it==v.end())
	{
		cout << "not find!" << endl;
	}
	else
	{
		cout << "find,name:" << it->name << "\tage:" << it->age << endl;
	}
}

void test7_3_22() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it==v.end())
	{
		cout << "not find;" << endl;
	}
	else
	{
		cout << "find:" << *it << endl;
	}
}

void test8_3_22() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	bool res = binary_search(v.begin(), v.end(), 2);
	if (res)
	{
		cout << "find it" << endl;
	}
	else
	{
		cout << "not find" << endl;
	}
}

void test9_3_22() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count(v.begin(), v.end(), 4);
	cout << "4的个数是:" << num << endl;
}

class Person2_3_22
{
public:
	Person2_3_22(string name,int age);
	~Person2_3_22();

	bool operator==(const Person2_3_22& p)const {
		if (this->age==p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string name;
	int age;
private:

};

Person2_3_22::Person2_3_22(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person2_3_22::~Person2_3_22()
{
}

void test10_3_22() {
	vector<Person2_3_22> v;

	Person2_3_22 p1("刘备", 35);
	Person2_3_22 p2("关羽", 35);
	Person2_3_22 p3("张飞", 35);
	Person2_3_22 p4("赵云", 30);
	Person2_3_22 p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person2_3_22 p("诸葛亮", 35);
	int num = count(v.begin(), v.end(), p);
	cout << "num=" << num << endl;
}

class Greater4_3_22
{
public:
	Greater4_3_22();
	~Greater4_3_22();

	bool operator()(int val)const {
		return val >=4;
	}
private:

};

Greater4_3_22::Greater4_3_22()
{
}

Greater4_3_22::~Greater4_3_22()
{
}

void test11_3_22() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);

	int num = count_if(v.begin(), v.end(), Greater4_3_22());
	cout << "大于等于4的个数为：" << num << endl;
}

class ageLess_3_22
{
public:
	ageLess_3_22();
	~ageLess_3_22();

	bool operator()(const Person2_3_22& p)const {
		return p.age < 35;
	}
private:

};

ageLess_3_22::ageLess_3_22()
{
}

ageLess_3_22::~ageLess_3_22()
{
}

void test12_3_22() {
	vector<Person2_3_22> v;

	Person2_3_22 p1("刘备", 35);
	Person2_3_22 p2("关羽", 35);
	Person2_3_22 p3("张飞", 35);
	Person2_3_22 p4("赵云", 30);
	Person2_3_22 p5("曹操", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), ageLess_3_22());
	cout << "小于35岁的个数：" << num << endl;
}

void myPrint1_3_22(int val) {
	cout << val << " ";
}

void test13_3_22() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;

	//从大到小排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}

void test14_3_22() {
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}

void test15_3_22() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int> v3;
	v3.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), myPrint1_3_22);
	cout << endl;
}


void test16_3_22() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "反转前： " << endl;
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;

	cout << "反转后： " << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}

void test17_3_22() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
	}

	vector<int> v2;
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint1_3_22);
	cout << endl;
}

void test18_3_22() {
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;

	//将容器中的20 替换成 2000
	cout << "替换后：" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}

class ReplaceGreater_3_22
{
public:
	ReplaceGreater_3_22();
	~ReplaceGreater_3_22();

	bool operator()(int val)const {
		return val > 30;
	}
private:

};

ReplaceGreater_3_22::ReplaceGreater_3_22()
{
}

ReplaceGreater_3_22::~ReplaceGreater_3_22()
{
}

void test19_3_22() {
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;

	//将容器中大于等于的30 替换成 3000
	cout << "替换后：" << endl;
	replace_if(v.begin(), v.end(), ReplaceGreater_3_22(), 3000);
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}


void test20_3_22() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), myPrint1_3_22);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint1_3_22);
	cout << endl;

	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myPrint1_3_22);
	cout << endl;
	for_each(v2.begin(), v2.end(), myPrint1_3_22);
	cout << endl;
}

void test21_3_22() {
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);
	cout << "total=" << total << endl;
}

void test22_3_22() {
	vector<int> v;
	v.resize(10);

	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myPrint1_3_22);
	cout << endl;
}

void test23_3_22() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(min(v1.size(),v2.size()));
	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), it, myPrint1_3_22);
	cout << endl;
}

void test24_3_22() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(v1.size()+v2.size());
	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), it, myPrint1_3_22);
	cout << endl;
}

void test25_3_22() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int> v3;
	v3.resize(max(v1.size(), v2.size()));
	cout << "v1与v2的差集为： " << endl;
	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), it, myPrint1_3_22);
	cout << endl;

	cout << "v2与v1的差集为： " << endl;
	it = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());
	for_each(v3.begin(), it, myPrint1_3_22);
	cout << endl;
}

int main() {
	test25_3_22();

	system("pause");
	return 0;
}
