#include<stdio.h>

void func3(){
int i = 11;
printf("[In func3] i - %d\n",i);
}

void func2(){
int i = 7;
printf("[In func2] i - %d\n",i);
func3();
printf("[In func2] i - %d\n",i);
}

void func1(){
int i = 5;
printf("[In func1] i - %d\n",i);
func2();
printf("[In func1] i - %d\n",i);
}

int main(){
long int i = 3;
printf("[In main ] i - %d\n",i);
func1();
printf("[In main ] i - %d\n",i);
return 0;
}
