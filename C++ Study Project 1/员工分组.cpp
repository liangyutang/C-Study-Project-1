#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class worker_3_18
{
public:
	worker_3_18();
	~worker_3_18();
	string name;
	int salary;

private:

};

worker_3_18::worker_3_18()
{
}

worker_3_18::~worker_3_18()
{
}


void createWorker_3_18(vector<worker_3_18>& v) {
	string name = "ABCDEFGHIJ";

	for (int i = 0; i < name.size(); i++)
	{
		worker_3_18 w;
		w.name = "员工";
		w.name += name[i];
		w.salary = rand() % 10000 + 10000;
		v.push_back(w);
		//cout << "姓名：" << w.name << "\t工资：" << w.salary << endl;
	}
}

void setGroup(vector<worker_3_18>& v, multimap<int, worker_3_18>& m) {
	for (vector<worker_3_18>::iterator it = v.begin(); it != v.end(); it++)
	{
		int depId = rand() % 3;
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerGourp(multimap<int, worker_3_18>& m) {
	cout << "策划部门：" << endl;
	multimap<int, worker_3_18>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	cout << count << endl;
	for  (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}

	cout << "-------------------------------" << endl;

	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	cout << count << endl;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}

	cout << "-------------------------------" << endl;

	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	cout << count << endl;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.name << "\t工资：" << pos->second.salary << endl;
	}
}

int main3_18() {

	srand((unsigned int)time(NULL));
	vector<worker_3_18> w;
	createWorker_3_18(w);

	multimap<int, worker_3_18> m;
	setGroup(w, m);

	showWorkerGourp(m);

	system("pause");
	return 0;
}