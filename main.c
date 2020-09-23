//Prototipo de funciones a ser llamadas en asm
#include <stdio.h>
extern int read(int fd,char * buff,unsigned int bytes);
extern int write(int fd, char * buff,unsigned int bytes);

#define SIZE 16

void swapBuffer(char* buffer,int bytes){
	int i;
	char aux;
	for(i=0;i<=bytes/2;i++){
		aux=buffer[i];
		buffer[i]=buffer[bytes-i];
		buffer[bytes-i]=aux;
	}
}

int main(int argc, char * argv[]){
	char buffer[SIZE];
	int bytes;
	bytes=read(0,buffer,SIZE);
	printf("%d\n",bytes );
	swapBuffer(buffer,bytes-2);
	write(1,buffer,bytes);
	return 0;
}