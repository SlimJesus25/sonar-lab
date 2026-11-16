#pragma once
#include <string>
#include <vector>

struct User {
    int id;
    char name[16];
    int age;
};

class UserDb {
public:
    UserDb();
    ~UserDb();

    void addUser(int id, const char* name, int age);
    std::shared_ptr<User> findUser(int id);
    bool login(const std::string& user, const std::string& password);
    int generateSessionToken();

private:
    std::vector<std::shared_ptr<User>> users_;
};
