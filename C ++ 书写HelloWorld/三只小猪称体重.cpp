#include <iostream>
using namespace std;

int main100()

{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	cout << "��ֱ�����С�������" << endl;
	cout << "������С��1������" << endl;

	cin >> pig1;
	cout << "������С��2������" << endl;

	cin >> pig2;
	cout << "������С��3������" << endl;
	cin >> pig3;
	cout << "С��1�������ǣ�" << pig1 << endl;
	cout << "С��2�������ǣ�" << pig2 << endl;
	cout << " С��3�������ǣ�" << pig3 << endl;
	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "С��1������" << endl;
		}
		else {
			cout << "С��3����" << endl;
		}
	}
	else
	{
		if (pig2 > pig3)
		{
			cout << "С��2���أ�" << endl;
		}
		else
		{
			cout << "С��3����" << endl;
		}
	}
	
	
	system("pause");
	return 0;
}