#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct greaterFive_3_20 {
	bool operator()(int val) {
		return val > 5;
	}
};

class myCompare_3_20
{
public:
	myCompare_3_20();
	~myCompare_3_20();
	bool operator()(int num1, int num2) {
		return num1 > num2;
	}

private:

};

myCompare_3_20::myCompare_3_20()
{
}

myCompare_3_20::~myCompare_3_20()
{
}

void test1_3_20() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterFive_3_20());
	if (it==v.end())
	{
		cout << "Ã»ÕÒµ½£¡" << endl;
	}
	else
	{
		cout << "ÕÒµ½" <<*it<< endl;
	}
}


void test2_3_20() {
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	cout << "-------------------------------" << endl;

	sort(v.begin(), v.end(), myCompare_3_20());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	
}

int main3_20() {
	test2_3_20();
	system("pause");
	return 0;
}