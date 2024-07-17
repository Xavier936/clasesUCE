/* Prgrama para calcular el requerimeirnto energetico*/

#include <iostream>
#include <conio.h>

using namespace std;
float calcula_gmb(float peso, int altura, int edad);
int main(){
	float peso, re, re1; 
	int altura, edad, opcion;
	cout<<"Digite su peso: ";
	cin>>peso;
	cout<<"Digite su altura: ";
	cin>>altura;
	cout<<"Digite su edad: ";
	cin>>edad;
	cout<<"1) Muy liviano"<<endl;
	cout<<"2) Liviano"<<endl;
	cout<<"3) Mediano"<<endl;
	cout<<"4) Pesado"<<endl;
	cout<<"5) Muy Pesado"<<endl;
	cin>>opcion;

	if(opcion == 1){
			re=calcula_gmb(peso,altura,edad)*1.1;
			//re1= re *1.1;
			//cout<<re;
			
	}else if(opcion == 2){
			re=calcula_gmb(peso,altura,edad)*1.2;
			//cout<<re;
	}else if(opcion == 3){
			re=calcula_gmb(peso,altura,edad)*1.3;
			//cout<<re;
	}else if(opcion == 4){
			re=calcula_gmb(peso,altura,edad)*1.4;
			//cout<<re;
	}else if(opcion == 5){
			re=calcula_gmb(peso,altura,edad)*1.5;
			//cout<<re;
	}
	cout<<re;
	//calcula_gmb(peso,altura,edad);
	return 0;
}

float calcula_gmb(float peso, int altura, int edad){
	float gmb;
	char op;
	//getchar(op);
	cout<<"M)asculino"<<endl;
	cout<<"F)emenino"<<endl;
	cout<<"S)alir"<<endl;
	cin>>op;
	//cin.get(op);
		
	if(op == 'M' || op == 'm' ){
		gmb = (10*peso)+(6.25*altura)-(5*edad)+5;
		//cout<<"su GMB es de: "<<gmb<<endl;
	}else if(op == 'F' || op == 'f'){
		gmb = (10*peso)+(6.25*altura)-(5*edad)-161;
		//cout<<"su GMB es de: "<<gmb<<endl;
	} else{
		cout<<"Opcion no valida"<<endl;
	}
		
	
	return gmb;
}


