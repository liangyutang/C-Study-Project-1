#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printList(const list<int>& l) {
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
}

void test1_3_14() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);
	

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3 = l2;
	printList(l3);

	list<int> l4(10, 100);
	printList(l4);
}

void test2_3_14() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);


	list<int> l2;
	l2 = l1;
	printList(l2);

	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printList(l3);

	list<int> l4;
	l4.assign(10, 100);
	printList(l4);
}

void test3_3_14() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);


	if (l1.empty())
	{
		cout << "l1 is null" << endl;
	}
	else
	{
		cout << "l1 not's null" << endl;
		cout << "l1 size:" << l1.size() << endl;
	}

	l1.resize(10);
	printList(l1);

	l1.resize(2);
	printList(l1);
}

void test4_3_14() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);

	printList(l1);

	l1.pop_back();
	printList(l1);

	l1.pop_front();
	printList(l1);

	list<int>::iterator it = l1.begin();
	l1.insert(++it, 1000);
	printList(l1);

	it = l1.begin();
	l1.erase(++it);
	printList(l1);

	l1.push_back(10000);
	l1.push_back(10000);
	l1.push_back(10000);
	printList(l1);
	l1.remove(10000);
	printList(l1);

	l1.clear();
	printList(l1);
}

void test5_3_14() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	cout << "第一个元素为：" << l1.front() << endl;
	cout << "最后一个元素为：" << l1.back() << endl;
}

bool myCompare(int val1, int val2) {
	return val1 > val2;
}


void test6_3_14() {
	list<int> l1;
	l1.push_back(90);
	l1.push_back(30);
	l1.push_back(20);
	l1.push_back(70);

	printList(l1);

	l1.reverse();
	printList(l1);

	l1.sort();
	printList(l1);

	l1.sort(myCompare);
	printList(l1);

}

int main3_14() {
	test6_3_14();

	system("pause");
	return 0;
}