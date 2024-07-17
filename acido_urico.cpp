#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float suero, orina;// declaracion de la variables
	char sexo;// se declara la variable sexo de tipo char para que se almacene letras en lugar de numeros
	cout<<"Programa para determinar los niveles de Acido urico"<<endl;
	do{//inicio del ciclo do-while
		cout<<"Digite H para hombre"<<endl;
		cout<<"Digite M para mujer"<<endl;
		cout<<"Digite S para salir"<<endl;
		cout<<"Opcion: "; 
		cin>>sexo;// se pide al usuario que digite una letra para hacer el caso respectivo
		switch(sexo){// se evalua la letra ingresada
			case 'h':
				cout<<"Ingrese la cantidad de suero: ";
				cin>>suero; //se pide al usuario que ingres la cantidad de suero
				cout<<"Ingrese la cantidad de orina: ";
				cin>>orina;// se pide al usuario que ingrese la cantidad de orina
				if(suero<4.0 && orina <200){// se evalua la variable para cuando este bajo los niveles normales
					cout<<"Su nivel de Acido urico es bajo"<<endl;
				}else if(suero>8.5 && orina >750){ // se evalua la variable para cuando este sobre los niveles normales
					cout<<"Su nivel de Acido urico es alto"<<endl;
				}else{
					cout<<"Su nivel de acid urico es normal"<<endl;// mostrara si la variables esta dentro de los niveles normales
				}
			break;
			
			case 'm':
				cout<<"Ingrese la cantidad de suero: ";
				cin>>suero;//se pide al usuario que ingres la cantidad de suero
				cout<<"Ingrese la cantidad de orina: ";
				cin>>orina;// se pide al usuario que ingrese la cantidad de orina
				if(suero<2.5 && orina <200){// se evalua la variable para cuando este bajo los niveles normales
					cout<<"Su nivel de Acido urico es bajo"<<endl;
				}else if(suero>7.5 && orina >750){ // se evalua la variable para cuando este sobre los niveles normales
					cout<<"Su nivel de Acido urico es alto"<<endl;
				}else{
					cout<<"Su nivel de acid urico es normal"<<endl; // mostrara si la variables esta dentro de los niveles normales
				}
			break;
		}
	}while( sexo != 's');
	return 0;
}
