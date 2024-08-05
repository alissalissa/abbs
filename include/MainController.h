//
// Created by alissa on 7/20/24.
// The main thread controller for the bbs
//

#pragma once

#include <cstring>
#include <map>
#include <netinet/in.h>
#include <sys/socket.h>
#include <thread>

#include "user.h"

namespace abbs {
	
	class MainController {
	private:
		std::map <user,std::thread> running;
		
	public:
		//Constructors
		MainController(void)=default;
		~MainController(void)=default;
		
		//command loop
		void run(void);
	};
	
	void run(MainController*);
	
} // abbs
