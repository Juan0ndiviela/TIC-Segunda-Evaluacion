#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Este programa genera una matriz 3x3 rellena de
//numeros enteros entre el 0 y el 9 con repeticion
using namespace std;

int main(){
    long semillita;
    int filas,col;
    char matriz[3][3];
    char letras;

    semillita=time(0);
    srand(semillita);
    for(filas=0;filas<3;filas++){
        for(col=0;col<3;col++){
        	letras=65+rand()%(91-65);
        	matriz[filas][col]=letras;
            
        }    
    }
    //MOSTRAMOS LA MATRIZ
        for(filas=0;filas<3;filas++){
            for(col=0;col<3;col++){    
            	cout<<" "<<matriz[filas][col];
        }
    	cout<<endl;
    }
	return 0;
}
