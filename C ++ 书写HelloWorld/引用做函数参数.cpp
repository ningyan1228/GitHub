#include <iostream>
using namespace std;
#include<string>

// ��������
//  1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	//cout << a << b << endl;
}

// 2����ַ����

void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

// 3�����ô���
void mySwap03(int &a, int &b)  //m��n�ı���
/*
ֱ�Ӹ��ߺ��������ġ���ַ�������ø���������������
����ֱ�Ӳ���ԭ���ݡ�
*/

{

	int temp = a;
	a = b;
	b = temp;
}

//��������ʱ�������������õļ������β�����ʵ��

int main171()
{
	int m = 10;
	int n = 20;
	//mySwap01(m, n);  // ֵ���ݣ��ββ�������ʵ��
	//	cout << m << n << endl;
	//mySwap02(&m, &n);  //��ַ���ݣ��βλ�����ʵ��
	//cout << m << n << endl;
	
	mySwap03(m, n);  //���ô��� �β�Ҳ������ʵ��
	//�����β�Ҳ�����ʵ�ε�ֵ 
	cout << m << n << endl;
	system("pause");
	return 0;
}