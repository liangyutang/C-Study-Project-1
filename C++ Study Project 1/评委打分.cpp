#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

class Person3_11
{
public:
	Person3_11(string name,int score);
	~Person3_11();
	void setScore(int score) {
		this->score = score;
	}
	string getName() {
		return this->name;
	}

	int getScore() {
		return this->score;
	}

private:
	string name;
	int score;
};

Person3_11::Person3_11(string name, int score)
{
	this->name = name;
	this->score = score;
}

Person3_11::~Person3_11()
{
}

//创建选手
void createPerson3_11(vector<Person3_11>& v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person3_11 p(name,score);

		v.push_back(p);
	}
}

void setScore3_11(vector<Person3_11>& v) {
	for (vector<Person3_11>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		it->setScore(avg);
	}
}

void showScore3_11(vector<Person3_11>& v) {
	for (vector<Person3_11>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name:" << it->getName() << "\tscore:" << it->getScore() << endl;
	}
}

int main3_11() {
	srand((unsigned int)time(NULL));

	vector<Person3_11> v;
	createPerson3_11(v);

	setScore3_11(v);

	showScore3_11(v);

	system("pause");
	return 0;
}