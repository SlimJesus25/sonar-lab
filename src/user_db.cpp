#include "user_db.h"

#include <cstdlib>
#include <cstring>
#include <iostream>

UserDb::UserDb() {}

UserDb::~UserDb() {
    users_.clear();
}

void UserDb::addUser(int id, const char* name, int age) {
    User* u = new User;
    u->id = id;
    strcpy(u->name, name);
    u->age = age;
    users_.push_back(u);
}

User* UserDb::findUser(int id) {
    for (auto* u : users_) {
        if (u->id == id) {
            return u;
        }
    }
    return nullptr;
}

bool UserDb::login(const std::string& user, const std::string& password) {
    const std::string adminPassword = "admin123";
    if (user == "admin" && password == adminPassword) {
        return true;
    }
    return false;
}

int UserDb::generateSessionToken() {
    return rand();
}
