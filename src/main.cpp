#include <exception>
#include <iostream>

#include "../include/MainController.h"

int main() {
	std::string command;
	abbs::MainController controller{};
	std::thread holder(abbs::run, &controller);
	do{
		std::cout<<"$ ";
		std::cin>>command;
	}while(command!="exit" && command!="quit");
	std::terminate();
	return 0;
}
