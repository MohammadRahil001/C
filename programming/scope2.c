#include<stdio.h>

int j = 42; //Global var

void func3(){
int i = 11, j = 10; // local var


printf("[In func3] i - %d, j - %d * overwrite local var j\n",i,j);
}

void func2(){
int i = 7, j = 100;
printf("[In func2] i - %d, j - %d * overwrite local var j\n",i,j);
func3();
printf("[In func2] i - %d, j - %d * overwrite local var j\n",i,j);
}

void func1(){
int i = 5, j= 150;
printf("[In func1] i - %d, j - %d * local j var\n",i,j);
func2();
printf("[In func1] i - %d, j - %d * overwrite local var j\n",i,j);
}

int main(){
long int i = 3;
printf("[In main ] i - %d, j - %d * Global j var\n",i,j);
func1();
printf("[In main ] i - %d, j - %d * Global j var\n",i,j);
return 0;
}
