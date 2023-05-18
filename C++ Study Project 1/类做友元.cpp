#include<iostream>
using namespace std;

class Building_2_15;
class goodGay_2_15
{
public:

	goodGay_2_15();
	void visit();

private:
	Building_2_15* building;
};


class Building_2_15
{
	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
	friend class goodGay_2_15;

public:
	Building_2_15();

public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom;//卧室
};

Building_2_15::Building_2_15()
{
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

goodGay_2_15::goodGay_2_15()
{
	building = new Building_2_15;
}

void goodGay_2_15::visit()
{
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
	cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test01_2_15()
{
	goodGay_2_15 gg;
	gg.visit();

}

int main2_15() {

	test01_2_15();

	system("pause");
	return 0;
}