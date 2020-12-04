#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> /* close() */
#include <sys/socket.h>
#include <netdb.h>
 
int main(void)
{
    int sock;
    char host[] = "www.martinbroadhurst.com";
    char port[] = "80";
    struct addrinfo hints, *res;
    char message[] = "GET / HTTP/1.1\nHost: www.martinbroadhurst.com\n\n";
    unsigned int i;
    char buf[1024];
    int bytes_read;
    int status;
 
    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    status = getaddrinfo(host, port, &hints, &res);
    if (status != 0) {
        perror("getaddrinfo");
        return 1;
    }
    sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sock == -1) {
        perror("socket");
        return 1;
    }
    status = connect(sock, res->ai_addr, res->ai_addrlen);
    if (status == -1) {
        perror("connect");
        return 1;
    }
    freeaddrinfo(res);
    send(sock, message, strlen(message), 0);
 
    do {
        bytes_read = recv(sock, buf, 1024, 0);
        if (bytes_read == -1) {
            perror("recv");
        }
        else {
            printf("%.*s", bytes_read, buf);
        }
    } while (bytes_read > 0);
 
    close(sock);
 
    return 0;
}