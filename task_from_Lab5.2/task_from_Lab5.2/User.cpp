#include "User.h"

User::User() : User("", "", "") {}

User::User(string id, string login, string password) : id(id), login(login), password(password) {}

User:: ~User() { cout << login << " deleted" << endl << endl; }

ostream& operator<<(ostream& output, User& user)
{
	output << "���������� �������������:\t" << user.id << endl << "�����:\t" << user.login << endl << "������:\t" << user.password;

	return output;
}