#include <iostream>
#include <conio.h>

using namespace std;
void caratula(); // declaracion de las funciones
void adrenalina();
void glucosa();
void calcio();

int main(){ 
	int op; // deckaracion de la variable para interactuar con el menu
	caratula(); // llamado a la funcion caratula que tendra todos los datos del estudiante
	cout<<"**************************"<<endl;
	do{ // inicio del ciclo do-while
		cout<<"1) Adrenalina"<<endl;
		cout<<"2) Calcio"<<endl;
		cout<<"3) Glucosa"<<endl;
		cout<<"4) Salir"<<endl;
		cout<<"Ingrese su seleccion: ";
		cin>>op;// lectura de un numero ingresado por pantalla
		switch(op){ // se evalua que opcion fue ingresada por el usuario para ejecutar el caso correspondiente
			case 1:
				adrenalina();// en caso de ser 1 se llama a la funcion adrenalina
			break;
			case 2:
				calcio();// en caso de ser 2 se llama a la funcion calcio
			break;
			case 3:
				glucosa();// en caso de ser 3 se llama a la funcion glucosa
			break;
		}
	}while(op != 4);// fin del ciclo do-while, saldra de la ejecucion del programa al momento de digitar 4
	
	return 0;	
}

void caratula(){ // se crea la funcion que conteniene los datos del estudiante
	cout<<"Conversor de unidades"<<endl;
	cout<<"Realizado por: Daniela Lara"<<endl;
	cout<<"Carrera: Nutricion y Dietetica"<<endl;
	cout<<"Semestre: 1ro B"<<endl;
}

void adrenalina(){ // se crea la funcion para la conversion de la adrenalina
	int opc; // se declara la variable opc que servira para escoger la forma de convercion
	float nmol, ug,n; // se declara las varibles que almacenaran los datos usados para la conversion
	do{
		cout<<"1) De nmol/L a ug/L"<<endl;
		cout<<"2) De ug/L a nmol/L"<<endl;
		cout<<"3)Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opc; // se lee el numero de opcion digitado para ejecutar el caso correspondiente
		switch(opc){// se evalua la opcion
			case 1:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;
				ug = n / 2.7586; // se realiza la conversion de nmol/L a Ug/L
				cout<<ug<<endl; // se imprime el resultado
			break;
			case 2:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;
				nmol = n * 0.3625; // se ejecuta la opcion de convercion de ug/L a nmol/L
				cout<<nmol<<endl; //se imprime el resultado
			break;
		}
	}while(opc != 3);// regresa al menu principal al digitar 3
}

void glucosa(){
	int opc;// se declara la variable opc que servira para escoger la forma de convercion
	float mmol, mg,n;// se declara las varibles que almacenaran los datos usados para la conversion
	do{
		cout<<"1) De mmol/L a mg/dL"<<endl;
		cout<<"2) De mg/dL a mmol/L"<<endl;
		cout<<"3)Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opc;// se pide al usuario digite una opcion
		switch(opc){//se evalua la opcion para realizar el caso respectivo
			case 1:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;//pide al usuario digite el valor a convertir
				mg = n * 18.016;// convierte el valor de mmol/L a mg/dl
				cout<<mg<<endl;//muestra el resultado en pantalla
			break;
			case 2:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;//pide al usuario digite el valor a convertir
				mmol = n / 0.0555;//convierte el valor de mg/dL a mmol/L
				cout<<mmol<<endl;// muestra el resultado en pantalla
			break;
		}
	}while(opc != 3);
}

void calcio(){
	int opc;// se declara la variable opc que servira para escoger la forma de convercion
	float mmol, mg,n;// se declara las varibles que almacenaran los datos usados para la conversion
	do{
		cout<<"1) De mmol/L a mg/dL"<<endl;
		cout<<"2) De mg/dL a mmol/L"<<endl;
		cout<<"3)Salir"<<endl;
		cout<<"Ingrese una opcion: ";
		cin>>opc;//pide al usuario que ingrese una opcion
		switch(opc){// evlua la opcion para ejecutar el caso respectivo
			case 1:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;//pide al usuario digite el valor a convertir
				mg = n * 4.0078;//transforma de mmol/L a mg/dl
				cout<<mg<<endl;// muestra el resultado en pantalla
			break;
			case 2:
				cout<<"Ingrese el valor a convertir: ";
				cin>>n;//pide al usuario digite el valor a convertir
				mmol = n / 0.2495;// convierte el valor de mg/dL a mmol/l
				cout<<mmol<<endl;// muestra el resultado en pantalla
			break;
		}
	}while(opc != 3);//regresa al menu principal al digitar 3
}
