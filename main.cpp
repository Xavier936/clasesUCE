#include <iostream>
#include "stdlib.h"
#include "ejercicios.h"

using namespace std;

int main(int argc, char *argv[]){
	int opcion;
	do{
		cout<<"*-----------------------------------------*"<<endl;
		cout<<"|          Ejercicios Propuestos          |"<<endl;
		cout<<"|      Realizado por: Daniela Lara        |"<<endl;
		cout<<"|                1ro B                    |"<<endl;
		cout<<"*-----------------------------------------*"<<endl<<endl;
		cout<<"*------------Menu de opciones--------------*"<<endl;
		cout<<"|1) Longitud de Circunferencia             |"<<endl;
		cout<<"|2) Area de Circunferencia                 |"<<endl;
		cout<<"|3) Factorial de un numero                 |"<<endl;
		cout<<"|4) Saber si un numero es cuadrado perfecto|"<<endl;
		cout<<"|5) Saber si un numero es o no Primo       |"<<endl;
		cout<<"|6) Salir                                  |"<<endl;
		cout<<"*------------------------------------------*"<<endl<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		float r;
		float lo,a;
		int n,fact,cua_perf,prim;
		switch(opcion){
			case 1:
				cout<<"Ingrese el valor del radio: ";
				cin>> r;
				lo = longitud(r);	
				cout<< "La longitud es: "<<lo<<endl;
				system("PAUSE");
				system("cls");
			break;
			
			case 2:
				cout<<"Ingrese el valor del radio: ";
				cin>> r;
				a = area_circunferencia(r);
				cout<<"El area es: "<<a<<endl;
				system("PAUSE");
				system("cls");
			break;
			
			case 3:
				cout<<"Ingrese un numero para calcular su factorial: ";
				cin>> n;
				fact = factorial(n);
				cout<<"EL factorial de "<<n<<" es: "<<fact<<endl;
				system("PAUSE");
				system("cls");
			break;
			
			case 4:
				cout<<"Ingrese un numero para saber si es cuadrado perfecto: ";
				cin>> n;
				cua_perf = cuadrado_perfecto(n);
				system("PAUSE");
				system("cls");
			break;
			
			case 5:
				cout<<"Ingrese un numero para saber si es primo: ";
				cin>> n;
				prim = primo(n);
				system("PAUSE");
				system("cls");
			break;
						
		}
	}while(opcion < 6);
	system("PAUSE");
	return 0;
	
}
