// #include<stdio.h>
// #include<unistd.h>
// #include<string.h>
// #include<sys/socket.h>
// #include<netinet/in.h>
// #include<sys/types.h>
// #include<stdlib.h>
// #define PORT 5556
// void main(){
//     //declare
//     ssize_t n;
//     int listenfd,connfd,addrsize;
//     struct sockaddr_in serveraddr,clientaddr;
//     //socket
//     listenfd=socket(AF_INET,SOCK_STREAM,0);
//     //addr and bind
//     addrsize=sizeof(serveraddr);
//     bzero(&serveraddr,addrsize);
//     serveraddr.sin_family=AF_INET;
//     serveraddr.sin_port=htons(PORT);
//     serveraddr.sin_addr.s_addr=INADDR_ANY;
//     bind(listenfd,(struct sockaddr*)&serveraddr,addrsize);
//     //listen
//     listen(listenfd,1);
//     //acccept
//     int addrsize1=sizeof(clientaddr);
//     while(1){
//         connfd=accept(listenfd,(struct sockaddr*)&clientaddr,&addrsize1);
//         //
//         char filename[10],buffer[80];
//         read(connfd,filename,10);
//         printf("filename is %s\n",filename);
//         FILE *fp;
//         fp=fopen(filename,"r");
//         while(fgets(buffer,80,fp)!=NULL){
//             write(connfd,buffer,80);
//         }
//         //close
//         fclose(fp);
//         close(connfd);
//     }

// }

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<stdlib.h>
#define SERV_PORT 5576

// int main()
// {
//     // ssize_t n;
//     FILE *fp;
//     char s[80],f[80];
//     struct sockaddr_in servaddr,cliaddr;
//     int listenfd,connfd,clilen;
//     //getting socket
//     if((listenfd = socket(AF_INET,SOCK_STREAM,0)) == -1)
//     {
// 		perror("socket: ");
// 		exit(-1);
//     }
//     //setting server address
//     bzero(&servaddr,sizeof(servaddr));
//     servaddr.sin_family=AF_INET;
//     servaddr.sin_port=htons(SERV_PORT);
//     servaddr.sin_addr.s_addr = INADDR_ANY;
//     //binding
//     int len=sizeof(struct sockaddr_in);
//     if((bind(listenfd,(struct sockaddr*)&servaddr,len))==-1)
//     {
//         perror("bind");exit(-1);
//     }
//     //listen
//     if((listen(listenfd,1)==-1))
//     {
//         perror("listen");exit(-1);
//     }
//     //connect accept
//     clilen=sizeof(cliaddr);
//     if((connfd=accept(listenfd,(struct sockaddr*)&cliaddr,&clilen))==-1)
//     {
//         perror("connection error");exit(-1);
//     }
    
//     printf("client connected\n");
//     //data transfer
//     read(connfd,f,80);
//     fp=fopen(f,"r");
//     printf("Filename:%s\n",f);

//     while(fgets(s,80,fp)){
//         printf("%s",s);
//         write(connfd,s,sizeof(s));
//     }
    
//     close(listenfd);
//     fclose(fp);
    
//     return 1;
// }


int main(int argc, char **argv)
{
	struct sockaddr_in server, client;
	int serv, cli;
	int len = sizeof(struct sockaddr_in);

	if((serv = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("server:");
		exit(-1);
	}

	bzero(&server, sizeof(server));
	server.sin_family = AF_INET;
	server.sin_port = htons(10001);
	server.sin_addr.s_addr = INADDR_ANY;
	// bzero(&server.sin_zero, 8);

	if(bind(serv, (struct sockaddr *)&server, len) == -1)
	{
		perror("bind:");
		exit(-1);
	}

	if(listen(serv, 5) == -1)
	{
		perror("listen:");
		exit(-1);
	}

	if((cli = accept(serv, (struct sockaddr *)&client, &len)) == -1)
	{
		perror("connect:");
		exit(-1);
	}

	printf("Client connected\n");

	FILE *fp;
	char f[80], s[80];
	read(cli, f, 80);
	printf("File is %s", f);
	fp = fopen(f, "r");

	while(fgets(s, 80, fp))
	{
		write(cli, s, sizeof(s));
		printf("%s", s);
	}

	close(serv);
	fclose(fp);
}
