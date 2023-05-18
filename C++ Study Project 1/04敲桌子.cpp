#include<iostream>
using namespace std;
int main4() {


	for (int  i = 1; i < 100; i++)
	{
		if (i%10==7)
		{
			cout << "ÇÃ×À×Ó" << endl;
			continue;
		}

		if (i/10%10==7)
		{
			cout << "ÇÃ×À×Ó" << endl;
			continue;
		}
		if (i % 7 == 0)
		{
			cout << "ÇÃ×À×Ó" << endl;
			continue;
		}cout << i << endl;
	}
	return 0;
}