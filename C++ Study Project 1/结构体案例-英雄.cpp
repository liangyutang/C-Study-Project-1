#include<iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(hero heros[], int len) {
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (heros[j].age>heros[j+1].age)
			{
				hero hero = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = hero;
			}
		}
	}
}


void printHero(hero heros[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "Hero name:" << heros[i].name << "\t Hero age:" << heros[i].age << "\t Hero sex:" << heros[i].sex << endl;
	}
}
void main11() {
	struct hero arr[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	bubbleSort(arr, 5);

	printHero(arr, 5);
}