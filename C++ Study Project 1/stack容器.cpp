#include<iostream>
#include<stack>
using namespace std;

void test1_3_12() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty())
	{
		cout << "s.pop:" << s.top() << endl;
		s.pop();
	}

	cout << "ջ�Ĵ�С��" << s.size() << endl;
}

int main3_12() {
	test1_3_12();
	system("pause");
	return 0;
}