#include"myArr.hpp"
#include"persion.hpp"

void printIntArrary(myArr<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void test01_3_6() {
	myArr<int> arr1(10);
	for (int i = 0; i < 10; i++)
	{
		arr1.push_back(i);
	}

	cout << "array1��ӡ�����" << endl;
	printIntArrary(arr1);
	cout << "array1�Ĵ�С��" << arr1.getSize() << endl;
	cout << "array1��������" << arr1.getCapacity() << endl;
	cout << "------------------------------" << endl;
	myArr<int> arr2(arr1);
	arr2.pop_back();
	cout << "array2��ӡ�����" << endl;
	printIntArrary(arr2);
	cout << "array2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "array2��������" << arr2.getCapacity() << endl;
}


void printPersionArray(myArr<Person1>& personArr) {
	for (int i = 0; i < personArr.getSize(); i++)
	{
		personArr[i].showPersion();
	}
}


void test02_3_6() {
	myArr<Person1> pArray(10);
	Person1 p1("�����", 30);
	Person1 p2("����", 20);
	Person1 p3("槼�", 18);
	Person1 p4("���Ѿ�", 15);
	Person1 p5("����", 24);


	pArray.push_back(p1);
	pArray.push_back(p2);
	pArray.push_back(p3);
	pArray.push_back(p4);
	pArray.push_back(p5);


	printPersionArray(pArray);
	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
	cout << "pArray��������" << pArray.getCapacity() << endl;
}

int main3_6() {

	//test01_3_6();
	test02_3_6();


	system("pause");
	return 0;
}