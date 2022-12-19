//Mi primer programa en C++ KEKW
//Condicional anidado
#include<iostream>
using namespace std;
int main(){
	//Definimos tres variables
	int n1,n2,n3;
	cout<<"Introduce tres números enteros: ";
	cin>> n1 >> n2 >> n3;
	if(n1>n2){
		if(n1>n3){
			cout<<"El mayor es "<<n1;
	}
	}
	else{
		cout<<"El mayor es "<<n3;
	}
	return 0;
	
	
	
}
