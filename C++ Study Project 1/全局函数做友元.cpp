#include<iostream>
using namespace std;

class Building_2_14
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容！！！！！！！！！！！！！！！！！！
	friend void goodGay_2_14(Building_2_14* building);

public:

	Building_2_14()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};


void goodGay_2_14(Building_2_14* building)
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << building->m_BedRoom << endl;
}


void test01_2_14()
{
	Building_2_14 b;
	goodGay_2_14(&b);
}

int main2_14() {

	test01_2_14();

	system("pause");
	return 0;
}