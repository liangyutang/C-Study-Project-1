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
			cout << "�´���" << endl;
		}else
		{
			cout << "��С��" << endl;
		}
		cout << "���������룺" ;
		cin >> cinValue;
	}
	cout << "��ϲ�㣬�¶��ˣ�";
	return 0;
}