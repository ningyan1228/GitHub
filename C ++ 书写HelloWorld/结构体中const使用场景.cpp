#include <iostream>
using namespace std;
#include<string>

struct Player {
	int PlayerId;
	int age;
	string name;
	int height;

};

void Playerlist(const Player* play)
{

	// play->age = 28;
	cout << "��Ա���룺" << play->PlayerId
		<< "��Ա���䣺" << play->age
		<< "��Ա������" << play->name
		<< "��Ա��ߣ�" << play->height << endl;
}


int main160()
{
	struct Player play = { 10,35,"messi",169 };
	Playerlist(&play);
	cout << "��Ա���룺" << play.PlayerId
		<< "��Ա���䣺" << play.age
		<< "��Ա������" << play.name
		<< "��Ա��ߣ�" << play.height << endl;
	
	system("pause");
	return 0;
}