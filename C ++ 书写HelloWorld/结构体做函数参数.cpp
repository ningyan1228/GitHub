#include <iostream>
using namespace std;
#include<string>
// �ṹ�嶨��
struct student {
	int age;
	string name;
	int score;
};

//ֵ����
void printStudent(student stu)
{
	stu.age = 10;
	cout << stu.age << stu.name << stu.score << endl;
}

//��ַ����
void printStudent2(student *stu)
{
	stu->age = 66;
	cout << stu->age << stu->name << stu->score << endl;
}

int main152()
{
	student stu = { 20,"kaka",99};
	//ֵ����
	printStudent(stu);
	cout << stu.age << stu.name << stu.score << endl;

	//��ַ����
	printStudent2(&stu);

	cout << "�������� ������" 
		<< stu.name << " ���䣺 " 
		<< stu.age << " ������" 
		<< stu.score << endl;

	
	
	system("pause");
	return 0;
}