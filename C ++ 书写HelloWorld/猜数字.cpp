#include <iostream>
using namespace std;
#include <ctime>
int main110()

{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //���������1-100�������  
	//cout << num << endl;

	int cai = 0;

	while (cai!=num)
	{
		cin >> cai;
		if (cai > num)
		{
			cout << "���µĴ�����ȷ��ֵ,���������룺" << endl;

		}
		else if (cai < num)
		{
			cout << "���µ�С����ȷ��ֵ,����������" << endl;
		}
		else
		{
			cout << "���¶��ˣ�" << endl;
			//break;
		}

	}
	system("pause");
	return 0;
}