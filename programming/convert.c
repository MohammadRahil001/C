#include<stdio.h>
#include<stdlib.h>
void usage(char *program){
	printf("Usage %s <message> <#No of times>\n",program);
	exit(1);
}

int main(int argc, char *argv[]){

	if(argc < 3)
		usage(argv[0]);

	int count = atoi(argv[2]);
	for(int i =0;i< count;i++){
		printf("%d - %s\n",i,argv[1]);
	}

	return 0;
}
