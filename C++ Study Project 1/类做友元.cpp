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
	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽�����ݣ���������������������������������������������������������������������
	friend class goodGay_2_15;

public:
	Building_2_15();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

Building_2_15::Building_2_15()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

goodGay_2_15::goodGay_2_15()
{
	building = new Building_2_15;
}

void goodGay_2_15::visit()
{
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û������ڷ���" << building->m_BedRoom << endl;
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