#include<iostream>
using namespace std;
#include<string>
#define MAX 1000 // ����ͨѶ¼�������Ϊ1000

//��ϵ�˽ṹ��
struct Person{
	string m_Name;   
	int m_Sex;                        
	int m_Age;
	string m_Phone;
	string m_Addr;

};
// ͨѶ¼�ṹ��
struct Addressbooks
{
 // ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];//�ṹ������Ƕ�׽ṹ��
// ͨѶ¼�е�ǰ��¼����ϵ�˸���
	int m_Size;   //// ��ǰ��ϵ���������������飩

};

// �����ϵ�˺���  
void addPerson(Addressbooks* abs) //�ṹ������������ ��ַ����
{
	if (abs->m_Size == MAX)  // ���ͨѶ¼�Ƿ�����
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else {
		// ��Ӿ������ϵ��

//����
string name;
cout << "������������ " << endl;
cin >> name;
abs->personArray[abs->m_Size].m_Name = name;//�洢����
/*
abs->m_Size  []��������

�������ϵ�ˣ�����ϵ��
������ personArray[n]����Ϊ����������0��ʼ��

��ʾ��ǰͨѶ¼���Ѵ洢����ϵ������
��ʼֵΪ0���������г�ʼ��abs.m_Size = 0��

personArray[abs->m_Size]

��ͨѶ¼Ϊ��ʱ��personArray[0]����һ��λ�ã�
���һ����ϵ�˺�abs->m_Size������Ϊ1��
�´����ʱʹ��personArray[1]
��ֵ����:
���û������name�ַ�������
����ϵ�˵�m_namer�ֶ�
�����ʵ����
��������һ���ձʼǱ���ͨѶ¼����

��һҳ������0��׼��д��һ����ϵ��
д���һ����ϵ�˺��ڷ����¼"����1ҳ"��m_Size=1��
�´����ʱ��ֱ�ӷ�����1ҳ������1��д�ڶ�����ϵ��

*/

//�Ա�
cout << "�������Ա�  " << endl;
cout << "1---��" << endl;
cout << "2---Ů" << endl;
int sex = 0;

while (true)
{
	cin >> sex;
	if (sex == 1 || sex == 2)   // �Ա����� ����֤
	{
		abs->personArray[abs->m_Size].m_Sex = sex;
		break;
	}
	else {
		cout << "������������������" << endl;
	}
}
// ����
cout << "���������䣺 " << endl;
int age = 0;
cin >> age;
abs->personArray[abs->m_Size].m_Age = age;

// �绰
cout << "��������ϵ�绰��" << endl;
string phone;
cin >> phone;
abs->personArray[abs->m_Size].m_Phone = phone;

// סַ
cout << "������סַ�� " << endl;
string address;
cin >> address;
abs->personArray[abs->m_Size].m_Addr = address;

//����ͨѶ¼����
abs->m_Size++;         // ���ģ�����������
/*
Ϊʲô��abs->m_Size��Ϊ������
m_Size ��ʾ��ǰ��ϵ������
����������0��ʼ����ˣ�
����0����ϵ��ʱ����һ��λ����0
����n����ϵ��ʱ����λ����n
�����ɺ�ִ��abs->m_Size++��Ϊ�´������׼��

ȷ����ÿ�������ϵ�˺�
ͨѶ¼�ļ�����ָ����һ������λ��
����ʵ��������ӹ��ܵĺ��Ļ���֮һ
*/
cout << "��ӳɹ���" << endl;

system("pause"); //�����������  ��ͣ�����������
system("cls"); //�������� 

	}
}

// ��ʾ������ϵ��
void showPerson(Addressbooks* abs) //��ַ����
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ������ϵ�˵���Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else {
		for (int i = 0;i < abs->m_Size;i++)
		{
			cout << "������ " << abs->personArray[i].m_Name << "\t";
			cout << "�Ա� " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
			cout << "�绰���룺 " << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ�� " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");  //�����������  ��ͣ �����������
	system("cls"); // ��������

}

  
// �����ϵ���Ƿ���ڣ�������ڣ�������ϵ����������ľ���λ�ã������ڷ���-1
// ����1 ͨѶ¼ ����2 �Ա�����
int isExist(Addressbooks* abs, string name)
// ���룺ͨѶ¼ָ�� abs ��Ҫ���ҵ����� name
/*
int ����ֵ�����ھ�ȷ��λ�����е���ϵ��λ��
Ϊʲô�� int ���ͣ�
(1) ��Ҫ���ؾ���λ��
ɾ��������Ҫ֪����ϵ���������еľ���λ�ã�������
���ֻ�Ƿ��� bool��������񣩣��޷�ֱ�Ӷ�λ��Ҫɾ����Ԫ��
(2) ������
�� -1 ��ʾ��δ�ҵ����Ǳ���еĳ���Լ��
ͨ���жϷ���ֵ�Ƿ�Ϊ -1��������ȷ�������ֳ�����
if (isExist(...) == -1) {
	// δ�ҵ�����ʾ����
} else {
	// �ҵ���ִ��ɾ��
}
*/
{

	for (int i = 0;i < abs->m_Size; i++)
	{		
		// �ҵ����û����������
		if(abs->personArray[i].m_Name == name)
		{
			return i;  //�ҵ����ˣ������������������±���
		}
	}
	return -1;// return �����ڲ������һ����ⲻ�Ծͻ�ֱ�ӷ���-1
	//�������������¼����
	// ��ΪisExist������forѭ������ȡ��0�����Է񶨵ķ���ֵֻ��ȡ-1.
	/*
	����ֵ��
		int ���ͣ��ҵ���ϵ��ʱ�������������е�����λ��
		��0 �� m_Size-1��
		-1��δ�ҵ���ϵ��
	*/
}


//ɾ����ϵ��
void deletePerson(Addressbooks* abs) {

	cout << "��������Ҫɾ������ϵ�� " << endl;
	string name;
	cin >> name;

	// ret ==-1 δ�ҵ�
	//ret !=-1 �ҵ���
	int ret = isExist(abs, name);  //ret �����±���
	/*
	isExist �����Ĳ�������Ҫ�� * ��ԭ�����£�
	 �������ͷ���
		deletePerson �����Ĳ�����
		void deletePerson(Addressbooks* abs) 
		{ // abs �� Addressbooks ��ָ��
		  // ...
	int ret = isExist(abs, name); // ֱ�Ӵ���ָ��
}
		abs �������ָ�룺
		�� deletePerson �����У�
		abs �Ѿ��� Addressbooks* ���ͣ�ָ�룩��
		ֱ�Ӵ��ݼ������� isExist �Ĳ���Ҫ��

		�� * ��ı����ͣ�
		���д�� isExist(*abs, name)��
		�� *abs �� Addressbooks ���ͣ��ṹ��ʵ������
		�뺯���������� Addressbooks* ��ƥ�䣬�ᵼ�±������
		ָ�����ԭ����Ҫָ��ʱ��ָ�룬��Ҫʵ��ʱ��ʵ��
	*/

	if (ret != -1) {

		//���ҵ��˴��ˣ�Ҫ����ɾ��
		for (int i = ret;i < abs->m_Size;i++) {
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;

	}
	system("pause");
	system("cls");


}

//����ָ����ϵ�� ��ʾ������ʾ������ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ� " << endl;
	string name;
	cin >> name;
	// �ж�ָ������ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "����" << abs->personArray[ret].m_Name << "\t";
		// ret����ϵ��������±�
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "����" << abs->personArray[ret].m_Age << "\t";
		cout << "����" << abs->personArray[ret].m_Phone << "\t";
		cout << "����" << abs->personArray[ret].m_Addr << endl;
	}
	else //δ�ҵ���ϵ��
	{
		cout << "���޴��ˣ�" << endl;
	}
	
	system("pause");
	system("cls");
	}

// �޸���ϵ��  //ָ�������ܴ�������ͨѶ¼��ַ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			
			cout << "������������������" << endl;
		}
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		cout << "��������ϵ�绰�� " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		cout << "�������ͥ��ַ�� " << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;
	}
	else {
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


//�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0; //����ǰ��¼��ϵ��������Ϊ0��
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");

}

// �˵����� ����

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

// �˳����� �˳�ͨѶ¼ϵͳ



int main()

{

	//����ͨѶ¼�ṹ����� ͨѶ¼�ṹ��ʵ��
	struct Addressbooks abs;
	//��ʼ��ͨѶ¼������Ϊ0
	abs.m_Size = 0;
	
	int select = 0; //�����û�ѡ������ı���
	
	while(true){
	// �˵�����
	showMenu();

	cin >> select;

	switch (select)  // ����ѡ��ִ�в���
	{
	case 1:// ���

		addPerson(&abs); // ���õ�ַ���ݣ���������ʵ��
		break;
	case 2:// ��ʾ
		showPerson(&abs);   // ����

		break;
	case 3: //ɾ��
		/* {
		cout << "������ɾ������ϵ�������� " << endl;
		string name;
		cin >> name;
		if (isExist(&abs, name) == -1)
		{
			cout << "���޴��ˣ�" << endl;
		}
		else {
			cout << "�ҵ����ˣ�" << endl;
		}
		}*/
		deletePerson(&abs);

		break;
	case 4: //����
		findPerson(&abs);

		break;
	case 5: //�޸�

		modifyPerson(&abs);
		break;
	case 6: //���
		cleanPerson(&abs);

		break;
	case 0: //�˳�
		
		cout << "��ӭ�´�ʹ�ã�" << endl;
		system("pause");
		return 0;  // ��������
		break;
	default:   // ��Ч����
		break;
	}

	}

	
}