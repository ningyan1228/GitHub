#include<iostream>
using namespace std;

int main26()
{

	int score = 0;
	cout << "��������ķ�����" << endl;

	cin >> score;

	if (score >= 601)
	{
		cout << "�㿼����һ����ѧ��" << endl;
	}
	else if (score <= 500&&score>=400)
	{
		cout << "�㿼���˶�����ѧ��" << endl;
	}
	else
	{
		cout << "��û���ϴ�ѧ" << endl;
	}
	system("pause");
	return 0;
}