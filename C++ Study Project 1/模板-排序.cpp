#include<iostream>
using namespace std;

template<class T>
void mySwap_3_2(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort_3_2(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[max]<arr[j])
			{
				max = j;
			}
		}
		if (max!=i)	
		{
			mySwap_3_2(arr[i], arr[max]);
		}
	}
}

template<class T>
void printArr_3_2(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void test01_3_2() {
	//char
	char arr[] = "bdcfeagh";
	int len = sizeof(arr) / sizeof(char);
	mySort_3_2(arr, len);
	printArr_3_2(arr, len);
}

void test02_3_2() {
	//char
	int arr[] = { 7, 5, 8, 1, 3, 9, 2, 4, 6 };
	int len = sizeof(arr) / sizeof(int);
	mySort_3_2(arr, len);
	printArr_3_2(arr, len);
}

void main3_2() {
	test01_3_2();
	test02_3_2();
}