#include<iostream>
//Instrucciones básicas
//for
using namespace std;

int main(){
	int cont, n_tabla;
	cout<<"Introduce el numero para hacer la tabla: ";
	cin>>n_tabla;
	cout<<"*******************"<<endl;
	cout<<"*   Tabla del "<<n_tabla<<"   *"<<endl;
	cout<<"*******************"<<endl;
	for(cont=0;cont<=10;cont++){
		cout<<n_tabla<<" * "<<cont<<" = "<<cont*n_tabla<<endl;
	}
	return 0;
	
}
