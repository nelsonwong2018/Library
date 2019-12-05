//begin person.hpp
#include <iostream>
#include <vector>

class Person
{
private:
    std::string firstName;
    std::string lastName;
    int         cardID;
    bool        active;

public:
    Person (int cardNo, bool act, std::string fName, std::string lName);
    std::string getFirstName();
    std::string getLastName();
    int         getId();
    void        setActive(bool act);
    bool        isActive();
    std::string fullName();
};

Person::Person(int cardNo, bool act, std::string fName, std::string lName) {
    // complete constructor
}

std::string Person::getFirstName() {
    return ""; // complete
}

std::string Person::getLastName() {
    return ""; // complete
}

int Person::getId() {
    return 0; // complete
}

void Person::setActive(bool act) {
} // complete

bool Person::isActive() {
    return true; // complete
}

std::string Person::fullName() {
    return ""; // complete
}
