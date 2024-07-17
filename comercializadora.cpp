#include <iostream>
#include "stdlib.h"

using namespace std;

int main(int argc, char *argv[]){
	int cantv1 = 0, cantv2 = 0,cantv3= 0, cantv4 = 0;// variables para la cantidad de ventas mensuales
	int salario, dpto, opc,empleados; //variables para el salario, departamentos, menu de opciones y los empleados
	int i;
	
	cout<<"Ingrese el nuemro de empleados"<<endl;
	cin>>empleados;
	if(empleados <= 0) //Validamos n datos
	{
		cout<<" Error, reintente porfavor"<<endl;
		cout<<" Ingrese el numero de empleados para entrar a su departamento de ventas:\t";
		cin>>empleados;		
	}
	
	for(i = 0; i <= empleados; i++){
		cout<<" \tBuenos dias, Trabajador N°: "<<i+1<<endl<<endl;
		cout<<" Ingrese el departamento al cual pertenece:\t\t";
		do{
		cout<<"1) Departamento 1"<<endl;
		cout<<"2) Departamento 2"<<endl;
		cout<<"3) Departamento 3"<<endl;
		cout<<"4) Departamento 4"<<endl;
		//cout<<"5) Tabla de pagos"<<endl;
		cout<<"Seleccione un departamento"<<endl;
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<" Ingrese el numero de ventas realizadas en el mes:\t";
				cin>>cantv1;
				//v1=ventas1+v1;
			break;
			case 2: 
			break;
			case 3: 
			break;
			case 4: 
			break;
			case 5: 
			break;
						
		}
	}while(opc <= 4);
	}
	/*
	*/
	 
}
