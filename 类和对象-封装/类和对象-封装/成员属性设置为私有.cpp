#include <iostream>
using namespace std;
#include<string>
/*
�ŵ�1�������г�Ա��������Ϊ˽�У�
�����Լ����ƶ�дȨ��

�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/

//��Ա��������Ϊ˽��
//����
class Person
{

public:
    // �������� д
    void setName(string name)
    {
        m_Name = name;
    }
    //��ȡ���� ��
    string getName()
    {

        return m_Name;
    }

    //��ȡ����
    int getAge()
    {
        return m_Age;
    }
    //�������䣨0-150��
    void setAge(int age) {

        if (age < 0 || age>150)
        {
            cout << "����������䣺" << age << "���󣬸�ֵʧ��" << endl;
            return;//���Ƿ���ֵ����˼ 
            //ֻ���ó����������������ִ��

        }

        m_Age = age;
    }


    // ����ż�� дȨ��
    void setIdol(string idol) {

        m_Idol = idol;
    }

private:
    string m_Name;  //���� �ɶ���д

    int m_Age = 18; //���� ֻ�� Ҳ����д��������1-150֮��

    string m_Idol; //ż�� ֻд

};





int main5() 
{



    Person kaka;
    //�������� д
    kaka.setName("�������濨��");
    //��ȡ���� ��
    cout << kaka.getName() << endl;

    //��������
    kaka.setAge(160);
    //��ȡ���� ��
    cout << kaka.getAge() << endl;
  
    //ż������  ֻд ���ܷ���
    kaka.setIdol("÷��");
   // cout << kaka.setIdol() << endl; ֻд״̬ �����ʲ���
   //  kaka.m_Name="kaka" ˽�г�Ա�޷�����




    system("pause");
    return 0;
}