#include<iostream>
using namespace std;

class Point
{
public:
	Point();
	Point(int x,int y);
	~Point();
	int x;
	int y;
private:
	
};
class Circle2
{
public:
	Circle2(int x,int y,int r);
	~Circle2();

	void calPoint(Point p) {
		int l = ( p.x- this->point.x) * (p.x - this->point.x) + (p.y - this->point.y) * (p.y - this->point.y);
		cout << "l:" <<l<< endl;
		cout << "r:" << this->r << endl;
		if (l ==0)
		{
			cout << "点在圆心。" << endl;
		}
		else if (l < this->r * this->r)
		{
			cout << "点在圆内。" << endl;
		}
		else if (l == this->r * this->r)
		{
			cout << "点在圆上。" << endl;
		}
		else if (l > this->r * this->r)
		{
			cout << "点在圆外。" << endl;
		}
	}

private:
	Point point;
	int r;
};

Circle2::Circle2(int x, int y, int r)
{
	this->point = Point(x, y);
	this->r = r;
}

Circle2::~Circle2()
{
}


Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::Point()
{
}

Point::~Point()
{
}


void main2_7() {
	Point p1 = Point(2, 5);
	Point p2 = Point(2, 2);
	Circle2 c = Circle2(2, 2, 2);
	c.calPoint(p1);
}