#include<iostream>
using namespace std;

class Building_2_14
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽�����ݣ�����������������������������������
	friend void goodGay_2_14(Building_2_14* building);

public:

	Building_2_14()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};


void goodGay_2_14(Building_2_14* building)
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
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