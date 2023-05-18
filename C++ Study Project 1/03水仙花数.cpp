#include<iostream>
using namespace std;
int main3() {
	int num = 100;
	do {
		int a = num % 10;
		int b = num / 10 % 10;
		int c = num / 100 % 10;
		if ((pow(a,3)+pow(b,3)+pow(c,3))==num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}