#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int x;
	int *px;
	x=3;
	px=&x;
	printf("x=%d\n",x);
	printf("px=%x\n",px);
	char letra;
	char *p_letra;
	letra='A';
	p_letra=&letra;
	printf("letra = %c\n", letra);
	printf("p_letra = %x", p_letra);
	
	return 0;
}


