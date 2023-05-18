#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

void printMap(map<int, int>& m) {
	for (map<int,int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue" << it->second << endl;
	}
	cout << endl;
}

void test1_3_17() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	printMap(m);

	map<int, int> m2(m);
	printMap(m);

	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}

void test2_3_17() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "map is null" << endl;
	}
	else
	{
		cout << "map not's null" << endl;
		cout << "map size:" << m.size() << endl;
	}
}

void test3_3_17() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "交换前：" << endl;
	printMap(m);
	printMap(m2);


	cout << "交换后：" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}


void test4_3_17()
{
	//插入
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//清空
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

void test5_3_17() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int,int>::iterator pos=m.find(3);

	if (pos!=m.end())
	{
		cout << "找到了元素key=" << pos->first << "\tvalue=" << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	int num = m.count(3);
	cout << "num=" << num << endl;
}

class myCompare3_17
{
public:
	myCompare3_17();
	~myCompare3_17();

	bool operator()(int v1, int v2)const {
		return v1 > v2;
	}
private:

};

myCompare3_17::myCompare3_17()
{
}

myCompare3_17::~myCompare3_17()
{
}

void test6_3_17() {
	map<int, int, myCompare3_17> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int,int,myCompare3_17>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key:" << it->first << "\tvalue:" << it->second << endl;
	}
}

int main3_17() {

	test6_3_17();
	system("pause");
	return 0;
}