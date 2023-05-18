#include<iostream>
using namespace std;
int main6() {

	int arr[5];
	for (int  i = 0; i < 5;i++)
	{
		cin >> arr[i];
	}
	int min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 1; i < 5; i++)
	{
		if (min>arr[i])
		{
			min = arr[i];
		}
	}
	cout << "体重最小的猪为：" << min << endl;
	return 0;
}