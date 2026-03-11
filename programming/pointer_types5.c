#include<stdio.h>
int main(){

int i;

int int_array[5] = {1,2,3,4,5};
char char_array[5] = {'a','b','c','d','e'};

unsigned long int hacky_pointer;

hacky_pointer =(unsigned long int) char_array;

for(i=0;i<5;i++){
printf("[Char pointer] point to %p and contains %c\n",hacky_pointer,*((char *) hacky_pointer));
hacky_pointer= hacky_pointer+sizeof(char);
}


hacky_pointer =(unsigned long int)int_array;
for(i=0;i<5;i++){
printf("[Integer pointer] point to %p and contains %d\n",hacky_pointer,*((int *) hacky_pointer));
hacky_pointer = hacky_pointer+sizeof(int);
}

return 0;
}
