#include <iostream>
using namespace std;

int main11() {
	char ch = 'a';

	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;

	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;

	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;

	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;

	cout << ch << endl;
	cout << sizeof('a') << endl;

	cout << (int)ch << endl;

	system("pause");

	return 0;
}