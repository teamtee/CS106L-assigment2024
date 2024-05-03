#include <set>
#include <string>
#ifndef _USER_H_
#define _USER_H_

class User {
public:
    // TODO: write special member functions, including default constructor!

    User() = default;
    ~User() = default;
    User(std::string name);
    User(const User&) = delete;
    User& operator=(const User&) = delete;
    User(User&&) = default;
    User& operator=(User&&) = default;
    // getter functions
    std::string getName() const;
    std::set<User> getFriends() const;
    friend User&& operator+(User & lef,User & rig);
     // setter functions
    void setName(std::string name);
    // TODO: add the < operator overload here!
    bool operator<(const User & other) const;

    
private:
    std::string name;
    std::set<User> friends;

};

#endif