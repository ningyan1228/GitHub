#include <iostream>
using namespace std;
#include<string>

//����Ȩ��
//����Ȩ��  public     ���ڿ��Է���  ������Է���
//����Ȩ��  protected  ���ڿ��Է���  ���ⲻ���Է���
//˽��Ȩ��  private    ���ڿ��Է���  ���ⲻ���Է���
//����Ȩ�� ���׵Ķ��Ӿ����� ���ӿ��Է���
// ˽��Ȩ�� ���Ӳ����Է��ʸ��׵�˽������

class Person1
{
public:
	//����Ȩ��
	string m_Name;   // ����
protected:
	//����Ȩ��
	string m_Car;  //���� ���ӿ���ʹ��
private:
	//˽��Ȩ��
	int m_Password; //���п����� ���Ӳ���֪��
public:   
	void func()  //���ڶ����Է���
	{
		m_Name = "÷��";
		m_Car = "������";
		m_Password = 123456;
	}
};

//���������� main��������������
int main3()
{	
	//ʵ�����������
	Person1 p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";  // ����Ȩ�޵�����,��������ʲ���
	//p1.m_Password=123; //˽��Ȩ�����ݣ���������ʲ���

	system("pause");
	return 0;
}