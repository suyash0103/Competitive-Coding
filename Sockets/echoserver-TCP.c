#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <errno.h>

#include <unistd.h>
#include <arpa/inet.h>

#define ERROR -1
#define MAX_CLIENTS 2
#define MAX_DATA 1024

int main(int argc, char ** argv)
{
	struct sockaddr_in server, client;
	int sock, new;
	int sockaddr_len = sizeof(struct sockaddr_in);
	int data_len;
	char data[MAX_DATA];

	if((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket : ");
		exit(-1);
	}

	server.sin_family = AF_INET;
	server.sin_port = htons(atoi(argv[1]));
	server.sin_addr.s_addr = INADDR_ANY;
	bzero(&server.sin_zero, 8);

	if((bind(sock, (struct sockaddr *)&server, sockaddr_len)) == -1)
	{
		perror("bind");
		exit(-1);
	}

	if((listen(sock, 5)) == -1)
	{
		perror("listen");
		exit(-1);
	}

	while(1)
	{
		if((new = accept(sock, (struct sockaddr *)&client, &sockaddr_len)) == -1)
		{
			perror("client");
			exit(-1);
		}

		printf("New client connected from port no %d and IP %s\n", ntohs(client.sin_port), inet_ntoa(client.sin_addr));

		data_len = 1;

		while(data_len)
		{
			data_len = recv(new, data, MAX_DATA, 0);

			if(data_len)
			{
				send(new, data, data_len, 0);
				data[data_len] = '\0';
				printf("Sent message : %s", data);
			}
		}

		printf("Client disconnected\n");

		close(new);
	}

	close(sock);

}
