#include <iostream>
using namespace std;
#include<string>

struct student
{
	// ��Ա�б�
	string name;
	int age;
	int score;

};

int main150()
{
	struct student stu1;
	stu1.age = 20;
	stu1.name = "k77";
	stu1.score = 90;
	cout << stu1.age << stu1.name << stu1.score << endl;

	struct student* p = &stu1;
	p->age = 60;
	cout << "������" << p->name 
		<< " ���䣺" << p->age 
		<< " ������" << p->score << endl;

	struct student arr[6] = {
		{"÷��",36,100},
		{"Ī������",40,100},
		{"���ɶ���",50,99},
		{"С��",55,89},
		{"����",56,99},
		{"������",60,99}
	};
	for (int i = 0;i < 6;i++)
	{

		cout << "����:" << arr[i].name << " "
			<< "����:" << arr[i].age << " "
			<< "����:" << arr[i].score << endl;

	}




	// cout << "hello world" << endl;
	system("pause");
	return 0;
}