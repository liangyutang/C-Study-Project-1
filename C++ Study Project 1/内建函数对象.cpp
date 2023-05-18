#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

//È¡·´
void test1_3_21() {
	negate<int> n;
	cout << n(50) << endl;
}

//¼Ó
void test2_3_21() {
	plus<int> p;
	cout << p(10, 20) << endl;
}

class myCompare_3_21
{
public:
	myCompare_3_21();
	~myCompare_3_21();

	bool operator()(int v1, int v2)const {
		return v1 > v2;
	}

private:

};

myCompare_3_21::myCompare_3_21()
{
}

myCompare_3_21::~myCompare_3_21()
{
}

void test3_3_21() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void test4_3_21() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(),v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}


int main3_21() {
	test4_3_21();
	system("pause");
	return 0;
}