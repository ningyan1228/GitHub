#include <iostream>
using namespace std;
#include<string>
/*
���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��
��뾶������Ƚ�
*/

//���Բ�Ĺ�ϵ
// ����
class Point {
public: //��Ϊ����Ϊ����
    //����x����
    void setX(int x) {
        m_X = x;
    }
    //��ȡx����
    int getX()
    {
        return m_X;
    }

    //����y����
    void setY(int y) {
        m_Y = y;
    }
    //��ȡy����
    int getY()
    {
        return m_Y;
    }

private:  //�������е����Զ�����Ϊ˽��
    int m_X;
    int m_Y;

};
//Բ��  ���ǳ����ģ�壨
// ���塰��ʲô������ʲô����
class Circle {
public:    //��Ϊ����Ϊ����
//���ð뾶
    void setR(int r) {
        m_R = r;
}
 //��ȡ�뾶
    int getR()
    {
        return m_R;
    }
//����Բ��
    void setCenter(Point center)
    {
        m_Center =  center;
    }
//��ȡԲ��
    Point getCenter() {
        return m_Center;
    }

private:  //��������Ϊ˽��
    int m_R; //�뾶
    // �����У���������һ���࣬��Ϊ����ĳ�Ա
    // ������ΪԲ���һ����Ա
    Point m_Center; //Բ��  �������������
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
    //��������֮��ľ��� ƽ�� Բ�ĺ͵��x��y����
    int distance =
        (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
        //����뾶��ƽ��
        int rDistance = c.getR() * c.getR();

        //�жϹ�ϵ
        if (distance == rDistance) {
            cout << "����Բ��" << endl;
        }
        else if (distance > rDistance)
        {
            cout << "����Բ��" << endl;
        }
        else {
            cout << "����Բ��" << endl;
        }
}


int main7() {

    //ʵ����ʲô�������Ǹ����ഴ���ľ���ʵ�壬
    // ����ľ���ʵ�֡�
    //����Բʵ��(���󣩶���Object��������ʵ��
    Circle c;
    c.setR(10);
    //������ʵ�� ��ΪԲ������������������
    Point center;   //����Բ��ʵ��
    center.setX(10);//Բ��x ����
    center.setY(0); //Բ��y ����
    //����Բ�ģ��������Բ��
    c.setCenter(center);
    
    //����������Ķ���
    //�����Ǿ����ʵ��
    // ������ģ�崴������ʵ�����ݣ�

    Point p1;
    p1.setX(10);
    p1.setY(0);

    Point p2;
    p2.setX(20);
    p2.setY(0);

    Point p3;
    p3.setX(21);
    p3.setY(0);
    //�жϹ�ϵ
    isInCircle(c, p1);
    isInCircle(c, p2);
    isInCircle(c, p3);


    system("pause");
    return 0;
}