#include <iostream>
using namespace std;
#include<string>

/*
#### ��������ע������
* ������Ϊ��������
* ����������������Ĭ�ϲ���
*/
//1��* ������Ϊ��������

void func(int & a)  //�ɶ���д int &a=10,��10���Ϸ�
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int & a)  //���Ͳ�ͬ  constֻ�ܶ�����д
// const int &a=10 �Ϸ� func��10��
{
	cout << "func (const int &a) ���� " << endl;
}

//����������������Ĭ�ϲ���
void func2(int a,int b=10) {

	cout << "func2(int a��int b)�ĵ���" << endl;

}

void func2(int a) {

	cout << "func2(int a)�ĵ���" << endl;

}

int main1910()
{
	//int a = 10;
	//func(a); //������const

	//func(10);//������const
	

	//func2(10);  //ֻ����һ��ֵ��func2���������ܵ��ã�
	//��ʱ���������˲�֪��ѡ˭�ˣ������˶����ԣ���������
	func2(10, 20);
	system("pause");
	return 0;
}