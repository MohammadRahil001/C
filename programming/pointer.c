#include<stdio.h>
#include<string.h>
int main(){

char str_a[20];//a 20 element char array
char *pointer1;// a pointer meant for a char array
char *pointer2;// another pointer

strcpy(str_a,"Hello Bro\n");
printf("String in 'str_a' is %s\n",str_a);

pointer1 = str_a;// point to address of str_a
printf("address of str_a in 0x%08x memory\n", &str_a);

printf("pointer1 address is 0x%08x and pointer1 point to address 0x%08x\n", &pointer1, pointer1);

printf("address of poniter2 is 0x%08x\n",&pointer2);
pointer2 = pointer1+2;//pointer2 point next 2 bytes of pointer1
printf("pointer2 point to 2 bytes next address of pointer1 0x%08x \n", pointer2 );
strcpy(pointer2," is a boy\n");
printf("After modify str_a using pointer2\n");
printf(str_a);

return 0;
}
