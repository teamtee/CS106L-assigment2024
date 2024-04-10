// Blank cpp file
#include "class.h"
Myclass::Myclass(){

}
Myclass::Myclass(std::string name){
    this->name = name;
}
Myclass::~Myclass(){

}
int Myclass::getid(){
    return this->_id;
}
void Myclass::setname(std::string name){
    this->name = name;
}