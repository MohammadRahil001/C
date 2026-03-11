#include<stdio.h>

int j = 9999;

void func3(){
int i = 1000 , j = 9;
printf("[In func3] i = %d , address of i - 0x08%x\n",i,&i);
printf("[In func3] j = %d , address of j - 0x08%x\n",j,&j);
}

void func2(){
int i = 100;
printf("[In func2] i = %d , address of i - 0x08%x\n",i,&i);
printf("[In func2] j = %d , address of j - 0x08%x\n",j,&j);
printf("[In func2] j = %d , address of j - 0x08%x\n",j,&j);
printf("Overwrite j global var \n");
j =111;
printf("[In func1] j = %d , address of j - 0x08%x\n",j,&j);
func3();
printf("[Back in func2] i = %d , address of i - 0x08%x\n",i,&i);
printf("[BAck in func2] j = %d , address of j - 0x08%x\n",j,&j);
}

void func1(){
int i = 10;
printf("[In func1] i = %d , address of i - 0x08%x\n",i,&i);
printf("[In func1] j = %d , address of j - 0x08%x\n",j,&j);
printf("Overwrite j global var \n");
j =1111;
printf("[In func1] j = %d , address of j - 0x08%x\n",j,&j);

func2();
printf("[Back in func1] i = %d , address of i - 0x08%x\n",i,&i);
printf("[BAck in func1] j = %d , address of j - 0x08%x\n",j,&j);
}

int main(){
int i = 1;

printf("[In main] i = %d , address of i - 0x08%x\n",i,&i);
printf("[In main] j = %d , address of j - 0x08%x\n",j,&j);
func1();
printf("[Back in main] i = %d , address of i - 0x08%x\n",i,&i);
printf("[BAck in main] j = %d , address of j - 0x08%x\n",j,&j);

return 0;
}
