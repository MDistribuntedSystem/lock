#include <stdlib.h>
#include <stdio.h>
#include <nanomsg/nn.h>
#include <nanomsg/pubsub.h>

int main(){
    
    int sock = nn_socket(AF_SP,NN_PUB);

    char *address = "tcp://*:40000";

    nn_bind(sock,address);

}