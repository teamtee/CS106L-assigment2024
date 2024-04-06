#include <iostream>
#include <fstream>
int main(){
	std::ofstream ofs;
	ofs.open("test.txt",std::ios::ate | std::ios::in);
	if(!ofs.is_open()){
		std::cout<<"File open fail\n";
	}
	ofs<<"test\n";
	ofs.close();
	return 0;
}
