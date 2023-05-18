#include<iostream>
using namespace std;


class Cube
{
public:
	Cube(int l,int h,int w);
	~Cube();
	void calMJ() {
		cout << "立方体的面积为:" << 2 * (m_l*m_w+m_l*m_h+m_w*m_h) << endl;
	}

	void calTJ() {
		cout << "立方体的体积为:" <<m_l * m_w * m_h << endl;
	}

	void isEqual(Cube cube) {
		if (this->m_l==cube.m_l && this->m_w==cube.m_l && this->m_h==cube.m_h)
		{
			cout << "立方体相等" << endl;
		}
		else
		{
			cout << "立方体不相等" << endl;
		}
	}
	int m_l;
	int m_h;
	int m_w;

private:
};

void isEqualAll(Cube cube1, Cube cube2) {
	if (cube2.m_l == cube1.m_l && cube2.m_w == cube1.m_l && cube2.m_h == cube1.m_h)
	{
		cout << "立方体相等" << endl;
	}
	else
	{
		cout << "立方体不相等" << endl;
	}
}
Cube::Cube(int l, int h, int w)
{
	this->m_l = l;
	this->m_h = h;
	this->m_w = w;
}

Cube::~Cube()
{
}

void main2_6() {
	Cube c1 = Cube(1, 2, 3);
	Cube c2 = Cube(1, 3, 3);
	c1.calMJ();
	c1.calTJ();
	c1.isEqual(c2);
	isEqualAll(c1, c2);
}