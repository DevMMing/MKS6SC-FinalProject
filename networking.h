#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>

#ifndef NETWORKING_H
#define NETWORKING_H

#define MAX_CLIENTS 8
#define BUFFER_SIZE 100
#define PORT "9001"
#define TEST_IP "127.0.0.1"


void error_check(int i, char *s);
int server_setup();
int server_connect(int sd);
int client_setup(char * server);


#endif
