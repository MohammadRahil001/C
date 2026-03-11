#include<stdio.h>

int main(){

int i;

int int_array[5] = {1,2,3,4,5};
char char_array[5] = {'a','b','c','d','e'};

void *ptr;
ptr = int_array;
for(i=0;i<5;i++){
printf("[Integer pointer] point to %p and contains %d\n",ptr,*((int *)ptr));
ptr =(void *) ((int *)ptr+1);
}

ptr = char_array;
for(i=0;i<5;i++){
printf("[Char pointer] point to %p and contains %c\n",ptr,*((char *)ptr));
ptr=(void *) ((char *)ptr+1);
}

return 0;
}
