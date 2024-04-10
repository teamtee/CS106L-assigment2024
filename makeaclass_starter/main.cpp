#include "class.h"
#include <iostream>
template<typename T=int> void func(T t){

}

int main(){
	Myclass app;
	app.setname("Hello");
	std::cout<<app.name<<"\n";
	return 0;
}

	
