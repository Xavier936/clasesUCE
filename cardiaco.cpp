#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float frecuencia, periodo, periodo2, latidos;//declaracion de las variables para almacenar lso calculos realizados
	int op; //declaracion de la variable para interactuar con el sistema
	cout<<"Programa para covertir la frecuencia cardiaca"<<endl;
	do{ //inicio del ciclo do-while
		cout<<"1) Latidos por minuto a frecuencia cardiaca"<<endl;
		cout<<"2) Frecuencia cardiaca a Latidos por minuto"<<endl;
		cout<<"3) Salir"<<endl;
		cout<<"Digite su seleccion: ";
		cin>>op;// se pide al usuario que digite un numero de el menu
		
		switch(op){// se evalua el nuemro elegido para realizar el caso respectivo
			case 1:
				cout<<"Ingrese el valor de los latidos por minuto: ";
				cin>>latidos;//Se pide al usuario que ingrese la cantidad de latidos por minuto
				frecuencia = latidos / 60; // se transforma los latidos por minuto a frecuencia cardiaca
				periodo = 1/frecuencia; // periodo de tiempo entre dos latidos expresado en segundos
				periodo2= periodo *1000; // perdiodo de tiempo entre dos latidos expresado en milisegundos
				cout<<"La frecuencia cardiaca es: "<<frecuencia<<", su perriodo es de: "<<periodo<<" segundos, o "<<periodo2<<" milisegundos"<<endl;
				//se muestra en pantalla los resultados
				system("pause");//se pone al sistema a espera de otra accion
			break;
			case 2:
				cout<<"Ingrese el valor de la frecuencia: ";
				cin>>frecuencia;// se pide al usuario que ingrese la fcuencia cardiaca
				latidos = frecuencia * 60;// se transforma la frecuencia cardiaca en latidos por minuto
				periodo = 1/frecuencia;// periodo de tiempo entre dos latidos expresado en segundos
				periodo2= periodo *1000; // perido de tiempo entre dos latidos expresado en milisegundos
				cout<<"Los latidos por minuto son de: "<<latidos<<", su perriodo es de: "<<periodo<<" segundos, o "<<periodo2<<" milisegundos"<<endl;
				//se presenta los resultados en pantalla
				system("pause");// se pone al sistema a espera de otra accion
			break;
				
		}
	}while(op != 3);//fin del ciclo do-while, la ejecucion termina al ingresar el numero 3
	return 0;
	
	
}
