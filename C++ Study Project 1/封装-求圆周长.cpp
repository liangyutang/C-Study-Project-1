#include<iostream>
using namespace std;

const double PI = 3.1415926;


class Circle_2_4
{
public:
	Circle_2_4();
	~Circle_2_4();
	int r;
	double calculateZC() {
		return 2 * PI * r;
	}


private:

};

Circle_2_4::Circle_2_4()
{
}

Circle_2_4::~Circle_2_4()
{
}
void main2_4() {
	Circle_2_4 c1;
	c1.r = 10;
	cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;
	system("pause");
}