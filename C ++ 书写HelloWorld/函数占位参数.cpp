#include <iostream>
using namespace std;
#include<string>

/*
C++�к������β��б��������ռλ������������ռλ��
���ú���ʱ�������λ��
�﷨������ֵ���� ������ (��������){}
*/

//ռλ����
void func(int a,int)  //�ڶ���int����ռλ������
//ռλ����Ҳ������Ĭ�ϲ��� void func(int a,int a=10) 
{
	cout << "����һ��ռλѧϰ" << endl;
}

int main203()
{
	func(10,10); //�ڶ���ʵ�α�����

	

	system("pause");
	return 0;
}