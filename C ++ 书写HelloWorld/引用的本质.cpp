#include <iostream>
using namespace std;
#include<string>


//���õı�����c++�ڲ�ʵ����һ��ָ�볣��
//���������ã�ת��Ϊ int* const ref = &a;
void func11(int& ref) {
	ref = 100; // ref�����ã�ת��Ϊ*ref = 100
}
int main180() {
	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func11(a);
	return 0;
}