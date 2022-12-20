#include<iostream>
using namespace std;

int main(){
	int resp;
	cout<<"****************";
	cout<<"*     MENU     *";
	cout<<"****************"<<endl;
	cout<<"1.Volver a mostrar el menu"<<endl;
	cout<<"2.Despedirme"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"ELIGE UNA RESPUESTA(1,2 o 3): ";
	cin>>resp;
	switch(resp){
		case 1:
			cout<<"****************";
			cout<<"*     MENU     *";
			cout<<"****************"<<endl;
			cout<<"1.Volver a mostrar el menu"<<endl;
			cout<<"2.Despedirme"<<endl;
			cout<<"3.Salir"<<endl;
			cout<<"ELIGE UNA RESPUESTA(1,2 o 3): ";
			return main();
			break;
		case 2:
			cout<<"Estas despedido"<<endl;
			break;
			return 0;
		case 3:
			break;
			return 0;
		default:
			cout<<"No has elegido ninguna opción";
	}
}
