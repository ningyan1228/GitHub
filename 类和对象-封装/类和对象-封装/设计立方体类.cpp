#include <iostream>
using namespace std;
#include<string>

/*
�����������(Cube)

������������������

�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
*/
//�������������
//�������
//�����Ϊ ��ȡ���������������
//�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube
{
public:

    // ���ó�
    void setL(int l)
    {
        m_L = l;
    }
    //��ȡ��
    int getL()
    {
        return m_L;

    }

    // ���ÿ�
    void setW(int w)
    {
        m_W = w;
    }
    //��ȡ��
    int getW()
    {
        return m_W;

    }

    // ���ø�
    void setH(int h)
    {
        m_H = h;
    }
    //��ȡ��
    int getH()
    {
        return m_H;

    }

    // ��ȡ���������
    int calculateS()
    {
        return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
    }
    //��ȡ���
    int calculateV()
    {

        return m_L * m_H * m_W;
    }
    // ��Ա����д��������
    /*
    �����ڲ�����ֱ�ӷ��� ��ǰ���󣨵��øú����Ķ���
    �ĳ�Ա���������ᵽ�Ĵ����� c1.isSameByClass(c2) �ĵ��÷�ʽ��
    ʵ���������� c1 �ĳ�Ա������ c2 �ĳ�Ա�������бȽϡ�
    */
    bool isSameByClass(Cube &c) {
        if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        /*
         // ������ʽʹ���˵�ǰ����������ԣ�m_L, m_W, m_H��
        // �Ͳ���������c�����ԣ�ͨ��c.getL()�Ȼ�ȡ��*/
        
        {
            return true;
        }
        return false;

    }

    //��������
private:
    int m_L; //��
    int m_W; //��
    int m_H;//��

};

//����ȫ�ֺ����ж������������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
    if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
    {
        return true;
    }
    return false;
}



int main6() {
    //�������������
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);

    cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
    cout << "c1�����Ϊ�� " << c1.calculateV()<< endl;

    Cube c2;
    c2.setH(11);
    c2.setL(10);
    c2.setW(10);


    bool ret = isSame(c1, c2);
    if (ret) 
    {
        cout << "c1��c2����ȵ�" << endl;
     }
    else {
        cout << "c1��c2�ǲ���ȵ�" << endl;
    }

    ret = c1.isSameByClass(c2);
    /*
    c1 �ǵ��øó�Ա�����Ķ���this ָ��ָ�� c1
    c2 �Ǵ���Ĳ�����ͨ�� c.getL() �ȷ�ʽ�������Ա
    Ϊʲô����д��c1.isSameByClass(c2)��
    ��Ϊ��Ա�����Ĺ�����ʽ��������Դ��Ĺ��ߣ�

    ���߹�����isSameByClass��ÿ���������Դ��ıȽϹ���
    ʹ�÷�ʽ������ָ�����ĸ�������Ĺ���ȥ�Ƚ�
    �Ƚ��߼����õ�ǰ�����壨���߳����ߣ������� vs ���������������

    Ϊʲô����д��c1.isSameByClass(c2)��
    ��Ϊ��Ա�����Ĺ�����ʽ��������Դ��Ĺ��ߣ�

    ���߹�����isSameByClass��ÿ���������Դ��ıȽϹ���
    ʹ�÷�ʽ������ָ�����ĸ�������Ĺ���ȥ�Ƚ�
    �Ƚ��߼����õ�ǰ�����壨���߳����ߣ������� vs ���������������

    */
    //��Ա��������ֱ�ӷ���˽������c1������ֻ��Ҫ��c2������
    if (ret)
    {
        cout << " ��Ա�����ж�c1��c2����ȵ�" << endl;
    }
    else {
        cout << "��Ա�����ж�c1��c2�ǲ���ȵ�" << endl;
    }
    system("pause");
    return 0;
}