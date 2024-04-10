// Blank header file
#include <string>
#ifndef _CLASS_H_
#define _CLASS_H_
class Myclass{
    private:
        int _id;
    public:
        std::string name;
        Myclass();
        Myclass(std::string name);
        ~Myclass();
        int getid();
        void setname(std::string name);

};
#endif