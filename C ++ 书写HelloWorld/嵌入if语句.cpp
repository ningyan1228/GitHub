#include <iostream>
using namespace std;

int main99()
{
	int score = 0;
	cout << "��������ĳɼ���" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "�㿼����һ����ѧ��" <<endl;
		if (score > 700)
		{
			cout << "�㿼���˱�����ѧ��" << endl;
		}
		else if (score > 650)
		{
			cout << "�㿼�����廪��" << endl;
		}
		else
		{
			cout << "�㿼����ɽ��" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "�㿼���˶�����ѧ��" << endl;
	}
	else if (score > 400)
	{
		cout << "�㿼����������ѧ��" << endl;
	}
	else
	{
		cout << "��û���ϴ�ѧ" << endl;
	}

	system("pause");
	return 0;
}