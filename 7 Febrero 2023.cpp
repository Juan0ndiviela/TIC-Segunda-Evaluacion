#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Este programa genera una matriz 3x3 rellena de 
//n�meros enteros entre el 0 y el 9 con repetici�n
using namespace std;

int main(){
	long semillita;
	semillita=time(0);
	srand(semillita);
	cout<<"Un numero al azar: "<<rand()%6;
	return 0;
}


