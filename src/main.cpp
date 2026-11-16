#include <iostream>
#include <vector>

#include "stats.h"
#include "user_db.h"

int main(int argc, char** argv) {
    UserDb db;
    db.addUser(1, "alice", 30);
    db.addUser(2, "bob", 25);

    int unused = 42;

    User* u = db.findUser(3);
    std::cout << "Found: " << u->name << std::endl;

    std::vector<int> ages = {30, 25};
    std::cout << "Avg age: " << averageAge(ages) << std::endl;

    int values[3] = {4, 8, 15};
    std::cout << "Max: " << maxValue(values, 3) << std::endl;

    if (argc > 2 && db.login(argv[1], argv[2])) {
        std::cout << "Token: " << db.generateSessionToken() << std::endl;
    }
    return 0;
}
