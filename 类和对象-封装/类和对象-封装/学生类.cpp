#include <iostream>
using namespace std;
#include<string>


//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
class Student {
	
public:         //����Ȩ��

	//���е����Ժ���Ϊ������ͳһ��Ϊ ��Ա
	//����  Ҳ��Ϊ ��Ա���� ��Ա����
	string m_Name;
	int m_Id;

	//��Ϊ �ֽ�����Ա���� ��Ա����
	//��ʾ������ѧ��
	void showStudent()
	{

	cout << "������ " << m_Name << "ѧ�ţ� " << m_Id << endl;

	}
	//��������ֵ ͨ����Ϊ�����Ը�ֵ
	void setName(string name)
	{
		m_Name = name;
	}
	void setId(int Id)
	{
		m_Id = Id;
	}

};




int main2()
{
	//���������ѧ��
	//����һ������ѧ�� ʵ��������
	Student s1;
	//��s1���� �������Ը�ֵ
	//s1.m_Name = "����";
	s1.setName("����"); //
	//s1.m_Id = 22;
	s1.setId(22);
	s1.showStudent();

	Student s2;
	s2.m_Name = "������˹��";
	s2.m_Id = 9;
	
	s2.showStudent();
	system("pause");
	return 0;
}