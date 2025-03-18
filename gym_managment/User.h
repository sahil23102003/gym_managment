#pragma once
#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
protected:
    string username;
    string password;
    string name;
    string role;
    int userId;
    static int nextUserId;

public:
    User(const string& username, const string& password, const string& name, const string& role);
    virtual ~User() = default;

    // Getters
    string getUsername() const;
    string getName() const;
    string getRole() const;
    int getUserId() const;

    // Methods
    bool authenticate(const string& inputPassword) const;
    virtual void displayInfo() const;
};

#endif // USER_H