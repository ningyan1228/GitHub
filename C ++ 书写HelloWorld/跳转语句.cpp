#include <iostream>
using namespace std;

int main131() {
	//��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
