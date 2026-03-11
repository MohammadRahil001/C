#include<stdio.h>

int main(int arg_c, char *argv[]){
printf("given an arguments\n");
for(int i=0;i<arg_c;i++){
printf("%d - %s\n",i,argv[i]);
}

return 0;
}
