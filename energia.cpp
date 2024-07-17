#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int opc;// variable que almacena la opcion ingresada
	float n,kcal,kj,w,m; // declaracon de variables para hacer los calculos
	cout<<"Programa para transformar las medidas del gasto energetico muscular"<<endl;
	do{ // inicio del do-while
		cout<<"1) De kcal a kJ"<<endl;
		cout<<"2) De M a kcal"<<endl;
		cout<<"3) De kcal/h a W"<<endl;
		cout<<"4) De W a kcal/h"<<endl;
		cout<<"5) De kcal/h a w/m^2"<<endl;
		cout<<"6) De w/m^2 a kcal/h"<<endl;
		cout<<"7) Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opc;// se pide al usuario que ingrese una opcion
		
		switch(opc){ // evalua la opcion ingresada para trabajar con el caso respectivo
			case 1:
				cout<<"Digite la medida a convertir: ";
				cin>>n; // se pide al usuario digite la medida en kcal que desea convertir
				kj = n * 4.184; // transforma la unidad de kcal a kj
				cout<<kj<<endl; // se muestra el resultado en pantalla
			break;
			case 2:
				cout<<"Digite la medida a convertir: ";
				cin>>n;// se pide al usuario digite la medida en kj que desea convertir
				kcal = n * 0.239; //transforma la unidad de kj a kcal
				cout<<kcal<<endl; // se muestra el resultado en pantalla
			break;
			
			case 3:
				cout<<"Digite la medida a convertir: ";
				cin>>n;//se pide al usuario digite la medida en kcal/h que desea convertir
				w = n * 1.161; //transforma la unidad de kcal/h a w
				cout<<w<<endl;// se muestra el resultado en pantalla
			break;
			
			case 4:
				cout<<"Digite la medida a convertir: ";
				cin>>n;//se pide al usuario digite la medida en w que desea convertir
				kcal = n * 0.861;//transforma la unidad de  w a kcal/h 
				cout<<kcal<<endl;// se muestra el resultado en pantalla
			break;	
			
			case 5:
				cout<<"Digite la medida a convertir: ";
				cin>>n;//se pide al usuario digite la medida en kcal/h que desea convertir
				w = n * 0.644;//transforma la unidad de kcal/h a w^2
				cout<<w<<endl;// se muestra el resultado en pantalla
			break;
				
			case 6:
				cout<<"Digite la medida a convertir: ";
				cin>>n;//se pide al usuario digite la medida en w/m^2 que desea convertir
				kcal = n * 1.553 ;//transforma la unidad de w^2 a kcal/h
				cout<<kj<<endl;// se muestra el resultado en pantalla
			break;
				
		}
	}while(opc != 7);// fin de do-while, termina la ejecucion al digitar 7
	return 0;
}
