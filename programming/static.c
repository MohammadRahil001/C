#include<stdio.h>

void func(){
int var = 5;
static int static_var = 5;
printf("[in func] var = %d\n",var);
printf("[in func] static_var = %d\n",static_var);
var++;
static_var++;
}


int main(){
int i;
static int static_var= 555;
for(i=0;i<5;i++){
printf("[in main] static_var = %d\n",static_var);
func();
}
return 0;
}
