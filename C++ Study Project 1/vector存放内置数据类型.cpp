#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void MyPrint(int val)
{
	cout << val << endl;
}
void test01_3_7() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();


	//while (pBegin!=pEnd)
	//{
	//	cout << *pBegin << endl;
	//	pBegin++;
	//}


	//for (vector<int>::iterator it = v.begin(); it !=v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	for_each(v.begin(), v.end(), MyPrint);
}


int main3_7() {

	test01_3_7();

	system("pause");
	return 0;
}