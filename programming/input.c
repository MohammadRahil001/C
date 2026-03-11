#include<stdio.h>
#include<string.h>
int main(){
	char msg[15];
	int count,i;

	strcpy(msg,"Hello world!");

	printf("How many times...");
	scanf("%d",&count);

	for(i=0;i<count;i++)
		printf("%3d - %s\n",i,msg);
	return 0;
}
