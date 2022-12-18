#pragma once

#include <iostream>
#include <string>
using namespace std;

struct User {

    string id;
    string login;
    string password;

    User();
    User(string, string, string);

    ~User();

    friend ostream& operator<<(ostream&, User&);

};