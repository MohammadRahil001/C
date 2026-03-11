#include<stdio.h>
#include<string.h>
int main(){

	char string[10];
	int A = -73;
	unsigned int B = 31337;

	strcpy(string,"Hello");
	printf("[A] Dec:%d, Hex:%x, Unsigned:%u\n",A,A,A);
	printf("[B] Dec:%d, Hex:%x, Unsigned:%u\n",B,B,B);
	printf("[field with on B] 3:'%3u', 10:'%10u', '%08u'\n",B,B,B);
	printf("[string] %s Address: 0x%08x\n",string,string);
	printf("variable A at address : 0x%08x\n",&A);
	return 0;
}
