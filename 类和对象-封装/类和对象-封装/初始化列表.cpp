#include <iostream>
using namespace std;
#include<string>


/* ----------------------------------------
**���ã�
���캯�����Ǹ����е����Գ�ʼ��������֮�⣬
C++�ṩ�˳�ʼ���б��﷨��������ʼ������

�﷨�����캯��()������1(ֵ1),����2��ֵ2��... {}

-------------------------------------------
*/

//��ʼ���б�
//ԭ���������е����Խ��г�ʼ���������ģ�
class Milan {
public:
    int m_a;
    int m_b;
    int m_c;
    //ʹ�ù��캯�����г�ʼ������ͳ��ʼ������
  /*  Milan(int a,int b,int c) {
        m_a = a;
        m_b = b;
        m_c = c;
    }*/

    //��ʼ���б��ʼ������
    /*Milan() :m_a(10), m_b(20), m_c(30) {

    }*/

    Milan(int a,int b,int c) :m_a(a), m_b(b), m_c(c) {

    }



};
void testMi14() {
    /*int a = 1;
    int b = 2;
    int c = 9;*/

    //Milan kaka(6, 9, 6);
    //cout << kaka.m_a << kaka.m_b << kaka.m_c << endl;
    //Milan gulite;

    Milan gulite(30, 90, 90);
    cout << gulite.m_a << gulite.m_b << gulite.m_c << endl;


}

int main13() {

    testMi14();

    system("pause");
    return 0;
}