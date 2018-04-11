// #include<stdio.h>
// #include<unistd.h>
// #include<string.h>
// #include<sys/socket.h>
// #include<sys/types.h>
// #include<netinet/in.h>
// #include<arpa/inet.h>
// #define PORT 5556
// void main(){
//     int sock=socket(AF_INET,SOCK_STREAM,0);
//     struct sockaddr_in serveraddr;
    
//     bzero(&serveraddr,sizeof(serveraddr));
//     serveraddr.sin_family=AF_INET;
//     serveraddr.sin_port=htons(PORT);
//     inet_pton(AF_INET,"localhost",&serveraddr.sin_addr);

//     connect(sock,(struct sockaddr *)&serveraddr,sizeof(serveraddr));
//     //
//     char filename[10],buffer[80];
//     printf("enter the filename you want to enter");
//     scanf("%s",filename);
//     write(sock,filename,sizeof(filename));
//     printf("file contents are\n");
//     FILE *fp;
//     fp=fopen("copy.txt","w");
//     while(read(sock,buffer,80)!=0){
//         printf("%s",buffer);
//         fputs(buffer,fp);
//     }
//     close(sock);
// }

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<arpa/inet.h>

#define SERV_PORT 5576

// int main(int argc,char **argv){
//     int i,j;
//     ssize_t n;
//     char filename[80],recvline[80];
//     struct sockaddr_in servaddr;
//     int sockfd;
   	
//    	sockfd=socket(AF_INET,SOCK_STREAM,0);
    
//     bzero(&servaddr,sizeof(servaddr));
//     servaddr.sin_family=AF_INET;
//     servaddr.sin_port=htons(10000);
//     servaddr.sin_addr.s_addr = INADDR_ANY;
    
//     inet_pton(AF_INET,argv[1],&servaddr.sin_addr);
//     connect(sockfd,(struct sockaddr*)&servaddr,sizeof(servaddr));

//     printf("enter the filename");
//     scanf("%s",filename);
    
//     write(sockfd,filename,sizeof(filename));
//     printf("Data from server:\n");

//     while(read(sockfd,recvline,80)!=0)
//     {
//         fputs(recvline,stdout);
//     }
    
//     close(sockfd);
// }



int main(int argc, char **argv)
{
	struct sockaddr_in server;
	int serv;

	if((serv = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("server:");
		exit(-1);
	}

	bzero(&server, sizeof(server));
	server.sin_family = AF_INET;
	server.sin_port = 10001;
	// server.sin_addr.s_addr = inet_addr("localhost");
	// bzero(&server.sin_addr, 8);

	inet_pton(AF_INET, "localhost", &server.sin_addr);

	int len = sizeof(server);
	if(connect(serv,(struct sockaddr*)&server, sizeof(server)) == -1)
	{
		perror("connect");
		exit(-1);
	}

	printf("Enter filename:");
	char f[80], s[80];
	scanf("%s", f);

	write(serv, f, sizeof(f));

	while(read(serv, s, 80))
	{
		printf("%s", s);
	}

	close(serv);
}