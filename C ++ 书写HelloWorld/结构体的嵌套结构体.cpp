#include <iostream>
using namespace std;
#include <string>

struct qiuyuan {
	string name;
	int age;
	int qiuyihaoma;

};
struct jiaolian {
	string name;
	int age;
	int id;
	struct qiuyuan stu;

};

int main151()
{
	jiaolian t1;
	t1.age = 66;
	t1.id = 01;
	t1.name = "�ϵϰ���";
	t1.stu.age = 10;
	t1.stu.name = "messi";
	t1.stu.qiuyihaoma= 10;
	cout<<"�������䣺"
		<< t1.age
		<< "����ID ��"
		<< t1.id 
		<< "�������� ��"
		<< t1.name 
		<< "��Ա���� ��"
		<< t1.stu.age 
		<< "��Ա���� ��"
		<< t1.stu.name 
		<< "��Ա���� ��"
		<< t1.stu.qiuyihaoma<<endl;

	//cout << "hello world" << endl;
	system("pause");
	return 0;
}