/*
��C++�� struct��classΨһ�����������
**Ĭ�ϵķ���Ȩ�޲�ͬ**
����
* struct Ĭ��Ȩ��Ϊ����public
* class   Ĭ��Ȩ��Ϊ˽��private
*/
#include <iostream>
using namespace std;
#include<string>

class C1 {

	int m_A;  //Ĭ��Ȩ����˽��Ȩ��
};

struct C2 {

	int m_A;// Ĭ��Ȩ���ǹ���
};


int main4()
{

	C1 c1;
	//c1.m_A = 100;  //Ĭ��Ȩ����˽��Ȩ�ޣ����ⲻ�ɷ���

	C2 c2;
	c2.m_A = 100;  //structĬ��Ȩ���ǹ���Ȩ��,���Է���


system("pause");
	return 0;
}