#include <iostream>
using namespace std;
#include<string>



int main170()
{
	// ���ñ����ȳ�ʼ����������
	int a = 10;// ��ʼ��
	int& b = a;//���� bһ����ʼ��a �Ͳ����Ը�����
	//��a�ı����Ͳ����������ı����ˣ�
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	b = 100;


	cout << "a:" << a << endl;
	cout << "b:" << b << endl;


	system("pause");
	return 0;
}