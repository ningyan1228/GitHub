#include <iostream>
using namespace std;
#include<string>

//1.���Ӣ�۽ṹ��
struct hero {

	string name;
	int age;
	string sex;
};

//ð������������������
void bubbleSort(hero* arr, int len)
{
	{
		for (int i = 0;i < len - 1;i++)
		{
			for (int j = 0;j < len - 1 - i;j++)
			{
				if (arr[j].age > arr[j + 1].age)
				{
					hero temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}
}
void printHeros(hero arr[], int len) {
	for (int i = 0;i < len;i++) {
		cout << "������ " << arr[i].name 
			<< " �Ա� " << arr[i].sex 
			<< " ���䣺 " << arr[i].age << endl;
	}
}

int main164()
{
	//2.�������鲢�������Ӣ�ۡ�
	struct hero arr[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < len ; i++)
	{
		cout //<< "������ " << heroArray->name // ʼ�ղ�����һ������ 
			// û���ƶ�ָ�룡���������Ӣ�۵����ݶ������ǵ���һ��Ԫ�ء�
			 << "������ " << arr[i].name
			 << "���䣺 " << arr[i].age 
			 << "�Ա� " << arr[i].sex << endl;
	}

	//3.������������򣬰�������
	bubbleSort(arr, len); //����

	printHeros(arr, len); //��ӡ

	//cout << "hello world" << endl;
	system("pause");
	return 0;
}