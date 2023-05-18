#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;


void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}


void test1_3_10() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4 = d3;
	printDeque(d4);
}

void test2_3_10() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2;
	d2 = d1;
	printDeque(d2);

	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printDeque(d4);

}

void test3_3_10() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())
	{
		cout << "d1 is null" << endl;
	}
	else
	{
		cout << "d1 not's null" << endl;
		cout << "d1 size:" << d1.size() << endl;
	}

	d1.resize(15,1);
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}

void test4_3_10() {
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	d1.pop_back();
	d1.pop_front();

	printDeque(d1);


}

void test5_3_10() {
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	d1.insert(d1.begin(), 2, 10000);
	printDeque(d1);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d2.insert(d2.begin(), d2.begin(), d2.end());
	printDeque(d2);

}

void test6_3_10() {
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	d1.erase(d1.begin());
	printDeque(d1);

	d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);

}

void test7_3_10() {
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << "\t";
	}
	cout << endl;


	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << "\t";
	}
	cout << endl;

	cout << "front:" << d1.front() << endl;

	cout << "back:" << d1.back() << endl;
}

void test8_3_10() {
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);

	sort(d1.begin(), d1.end());
	printDeque(d1);
}

int main3_10() {
	test8_3_10();


	system("pause");
	return 0;
}