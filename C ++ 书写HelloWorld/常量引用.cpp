#include <iostream>
using namespace std;
#include<string>
// ����������Ҫ���������βΣ���ֹ�����
// �ں����β��б��У����Լ�const����ʵ�Σ���ֹ�βθı�ʵ��

//��ӡ���ݵĺ���
void showValue(const int & val)
{

	// val = 1000;//��ֹ�βθ���ʵ��
	//�β�λ�ü���const
	cout << "val= " << val;


}


int main181()
{

	//��������
	// ʹ�ó��������������βΣ���ֹ�������
	//int a = 10;

	//int & ref = a; //�Ϸ�
	// int& ref = 10; // ���ñ�����һ��Ϸ����ڴ�ռ�
	//const int & ref = 10;
	// ���� const֮����ԣ��ȴ�����ʱ������10
	//�������������޸� int temp=10;const int & ref=temp;
	// ref = 20;  ����const֮���Ϊֻ�����������޸�
	
	
	int a = 100;
	showValue(a);
	cout << a << endl;

	system("pause");
	return 0;
}