#include "User.h"

User::User() : User("", "", "") {}

User::User(string id, string login, string password) : id(id), login(login), password(password) {}

User:: ~User() { cout << login << " deleted" << endl << endl; }

ostream& operator<<(ostream& output, User& user)
{
	output << "Уникальный идентификатор:\t" << user.id << endl << "Логин:\t" << user.login << endl << "Пароль:\t" << user.password;

	return output;
}