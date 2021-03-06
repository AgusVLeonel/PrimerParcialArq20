//Prototipo de funciones a ser llamadas en asm

extern int read(int fd,char * buff,unsigned int bytes);
extern int write(int fd, char * buff,unsigned int bytes);

#define SIZE 17

void swapBuffer(char* buffer,int bytes){
	int i;
	char aux;
	for(i=0;i<bytes/2;i++){
		aux=buffer[i];
		buffer[i]=buffer[bytes-i-1];
		buffer[bytes-i-1]=aux;
	}
}

int main(int argc, char * argv[]){
	char buffer[SIZE];
	int bytes;
	bytes=read(0,buffer,SIZE);
	if(bytes<=16){
		swapBuffer(buffer,bytes-1);
		write(1,buffer,bytes);
	}else{
		write(1,"Se ingreso mas de 15 caracteres.\n",34);
	}
	return 0;
}
