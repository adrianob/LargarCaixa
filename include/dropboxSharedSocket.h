//
//  dropboxSharedSocket.h
//  LargarCaixa
//
//  Created by Pietro Degrazia on 5/8/17.
//  Copyright © 2017 Pietro Degrazia. All rights reserved.
//

#ifndef dropboxSharedSocket_h
#define dropboxSharedSocket_h

#include "dropboxUtil.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <pwd.h>

struct buffer {
    char *data;
    int size;
};

void send_file_from_path(int socket, char *path);
void receive_file_and_save_to_path(int socket, char *path);
void send_data(char *data, int sockfd, int datalen);
struct buffer* read_data(int newsockfd);

#endif /* dropboxSharedSocket_h */