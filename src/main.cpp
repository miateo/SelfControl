#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "cJSON"

typedef struct {
  char url[256];
  char ip[256];
  int timeLeft;
  time_t lastUpdate;
} UrlObj;

/**
* This function helps to resolve
* the host ip address when an url is
* set in input
*/
int resolveHostName(const char *hostname, char *ip){

}
