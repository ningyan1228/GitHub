#include <iostream>
using namespace std;
#include<string>


/* ----------------------------------------
C++���еĳ�Ա��������һ�����(ʵ��������
���ǳƸó�ԱΪ �����Ա
-------------------------------------------
���磺
class A {}
class B
{
    A a��//A��ʵ��������B��ĳ�Ա
    �������Ϊ���Ա

}
*/
//�������Ϊ���Ա
//�ֻ���
class Phone 
{
public:
    //���캯������ ��Ϊ
    Phone(string pname) {
        m_pname = pname;
        cout << "Phone�Ĺ��캯������" << endl;
    }
   

    ~Phone() {
        cout << "Phone��������������" << endl;
        cout.flush(); // ǿ��ˢ�����������
        //���˺��ֻ�˭�ȵ�����������
    }

    //�ֻ�Ʒ������ ����
    string m_pname;
};



//�� ��
class Person {
public:
    //��Ϊ  ��ʼ���б� ���캯��
    Person(string name, string pname) :m_name(name), m_phone(pname) {
        cout << "Person�Ĺ��캯������" << endl;

    }
    ~Person() {
        cout << "Person��������������" << endl;
        //���˺��ֻ�˭�ȵ�����������
    }


    //����
//����
    string m_name;
//�ֻ� �ֻ���ʵ������
    Phone m_phone;
};

//������������ֻ��������Ϊ�����Ա��
// ����ʱ���ȹ��������(�ֻ������ٹ��������ˣ�
//����������������˳���빹���෴
void test00() {
    Person p("÷��", "����");
    cout << p.m_name << p.m_phone.m_pname << endl;
}


int main15() {

    test00();
   
    system("pause");
    return 0;
}