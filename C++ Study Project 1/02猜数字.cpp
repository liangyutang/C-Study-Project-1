#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;


int main2() {
	srand(time(nullptr));
	int min = 1, max = 100;
	int randomValue = (rand() % (max - min)) + min;
	int cinValue = 0;
	//cout << randomValue << endl;
	cin >> cinValue;
	
	while (cinValue != randomValue)
	{
		if (cinValue >randomValue)
		{
			cout << "猜大了" << endl;
		}else
		{
			cout << "猜小了" << endl;
		}
		cout << "请重新输入：" ;
		cin >> cinValue;
	}
	cout << "恭喜你，猜对了！";
	return 0;
}