//
// Created by alissa on 7/17/24.
//

#pragma once

#include <string>
#include <vector>

namespace abbs {
	
	class user {
	private:
		std::string uname;
		std::vector<long> postids;
		
	public:
		//Constructors
		user(void);
		user(std::string);
		~user(void)=default;
		
		//Get/set
		void change_uname(std::string);
		std::string get_uname(void);
	};
	
} // abbs
