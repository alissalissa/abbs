//
// Created by alissa on 7/17/24.
//

#include <utility>

#include "../include/user.h"

//Constructors
abbs::user::user(void){
	uname="";
}
abbs::user::user(std::string new_uname){
	uname=std::move(new_uname);
}

//Get/set
void abbs::user::set_uname(std::string new_uname) {
	uname=std::move(new_uname);
}
void abbs::user::add_post(long npid) {
	postids.push_back(npid);
}
std::string abbs::user::get_uname(void) const {
	return uname;
}