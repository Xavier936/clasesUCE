#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int opc;
	//do{

	cout<<"1- AVENA"<< endl;
	cout<<"2- POLLO"<< endl;
	cout<<"3- HUEVOS"<< endl;
	cout<<"4- LECHE ENTERA"<< endl;
	cout<<"5- KUCHEN"<< endl;
	cout<<"6- POROTOS"<< endl;	
 	cout<<"Ingrese su seleccion: ";
	cin>>opc;
		
		
		switch(opc){
		case 1:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion           28  g"<<endl;
				cout<<"Energia                    110  Kcal"<<endl;
				cout<<"Proteinas                    4 g"<<endl;
				cout<<"Calcio                       2 g"<<endl;	
				cout<<"Precio                      30 $/P"<<endl;
				cout<<"Limite                       4 p/d "<<endl;
			break;
		case 2:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion          100  g"<<endl;
				cout<<"Energia                    205  Kcal"<<endl;
				cout<<"Proteinas                   32 g"<<endl;
				cout<<"Calcio                      12 g"<<endl;	
				cout<<"Precio                     240 $/P"<<endl;
				cout<<"Limite                       3 p/d "<<endl;
			break;
		case 3:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion           2  U/Grandes"<<endl;
				cout<<"Energia                    160 Kcal"<<endl;
				cout<<"Proteinas                   13 g"<<endl;
				cout<<"Calcio                      54 mg"<<endl;
				cout<<"Precio                     130 $/P"<<endl;
				cout<<"Limite                       2 p/d "<<endl;
			break;
		case 4:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion          237 cc"<<endl;
				cout<<"Energia                    160 Kcal"<<endl;
				cout<<"Proteinas                    8 g"<<endl;
				cout<<"Calcio                      285 mg"<<endl;
				cout<<"Precio                     90 $/P"<<endl;
				cout<<"Limite                       8 p/d "<<endl;
			break;
		case 5:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion          170 g"<<endl;
				cout<<"Energia                    420 Kcal"<<endl;
				cout<<"Proteinas                    4 g"<<endl;
				cout<<"Calcio                      22 mg"<<endl;
				cout<<"Precio                     200 $/P"<<endl;
				cout<<"Limite                       2 p/d "<<endl;
			break;
				
		case 6:
				cout<<"___"<<endl;
				cout<<"Tamanio de porcion          260 g"<<endl;
				cout<<"Energia                    260 Kcal"<<endl;
				cout<<"Proteinas                    14 g"<<endl;
				cout<<"Calcio                      80 mg"<<endl;
				cout<<"Precio                     60 $/P"<<endl;
				cout<<"Limite                       2 p/d "<<endl;
			break;
	}
		
		
	return 0;
}
