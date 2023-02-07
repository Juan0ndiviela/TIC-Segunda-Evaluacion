#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//Este programa ordena por el método de la burbuja
using namespace std;

int main(){
    //Reservo memoria para un vector de numeros enteros
    //sin repeticion
    int numeros[5];
    //Leemos los 5 numeros
    int cont;
    for(cont=0;cont<5;cont++){
       printf("\nDime un numero: ");
       scanf("%d",&numeros[cont]);        
    }
    printf("\nLa lista desordenada es : ");
    for(cont=0;cont<5;cont++){
       printf("%d,",numeros[cont]);
       
    }
    return 0;
}

