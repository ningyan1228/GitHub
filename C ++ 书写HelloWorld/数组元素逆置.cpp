#include <iostream>
using namespace std;

int main106() {

	int arr[5] = { 600,200,400,66,800 };

	int max = 0;
	for (int i = 0;i < 5;i++)
	{	//cout << arr[i];
		if (arr[i] > max)
		{
			max = arr[i];

		}
	}
	cout << "���ֵ�С���ǣ�" << max << endl;

	system("pause");

	return 0;
}