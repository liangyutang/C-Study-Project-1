#include<iostream>
using namespace std;
void main7() {

	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	int arr1[5];
	for (int i = 0; i < 5; i++)
	{
		arr1[i] = arr[4 - i];
		cout << arr1[i] << "\t";
	}
	cout << endl;
}