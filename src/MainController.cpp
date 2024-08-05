//
// Created by alissa on 7/20/24.
//

#include "../include/MainController.h"

void abbs::run(MainController *controller){
	controller->run();
}

void abbs::MainController::run(void){
	//Open up a listening socket
	int soc_id=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in server_addr={};
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(8080);
	server_addr.sin_addr.s_addr=INADDR_ANY;
	
	bind(soc_id,(struct sockaddr*)&server_addr,sizeof(server_addr));
	listen(soc_id,1);
	int client_socket=accept(soc_id,nullptr,nullptr);
	char msg[]="foo";
	send(client_socket,msg,strlen(msg),0);
	close(client_socket);
	close(soc_id);
	return;
}