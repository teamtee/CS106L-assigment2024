#include "user.h"
#include <set>
#include <iostream>
#include <string>


User::User(std::string name) {
// TODO: Implement the additional constructor here!
    this->name = name;

}
bool User::operator<(const User & other) const{
    return this->name > other.name;
}

std::string User::getName() const {
    return name;
}

std::set<User> User::getFriends() const {
    return friends;
}

void User::setName(std::string name) {
    this->name = name;
}

// TODO: Implement the < operator overload here!
