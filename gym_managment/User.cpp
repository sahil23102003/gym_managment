#include "../include/models/User.h"
#include <iostream>

using namespace std;

int User::nextUserId = 1;

User::User(const string& username, const string& password, const string& name, const string& role)
    : username(username), password(password), name(name), role(role) {
    userId = nextUserId++;
}

string User::getUsername() const {
    return username;
}

string User::getName() const {
    return name;
}

string User::getRole() const {
    return role;
}

int User::getUserId() const {
    return userId;
}

bool User::authenticate(const string& inputPassword) const {
    return password == inputPassword;
}

void User::displayInfo() const {
    cout << "User ID: " << userId << endl;
    cout << "Name: " << name << endl;
    cout << "Username: " << username << endl;
    cout << "Role: " << role << endl;
}