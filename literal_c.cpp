#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int opc;
	//do{
		cout<<"Indicador de cantidades"<<endl;
		cout<<"Realizado por: Daniela Lara"<<endl;
		cout<<endl;
		cout<<"1) tostadas tipo fibra"<<endl;
		cout<<"2) Queso fresco"<<endl;
		cout<<"3) Tomate"<<endl;
		cout<<"4) Manzana"<<endl;
		cout<<"5) Salir"<<endl;
		cout<<"Ingrese su seleccion: ";
		cin>>opc;
		cout<<endl;
		switch(opc){
			case 1:
				cout<<"una porcion de 30 g tiene: "<<endl;
				cout<<"__________________________________________________________________________________________________________________"<<endl;
				cout<<"|Calorias(kcal       |"<<"Proteinas(g)           |"<<"Hidratos de carbono(g)     |"<<"Grasas(g)         |"<<"Fibra(g)            |"<<endl; 	
				cout<<"| 105                |"<<"4.5                    |"<<"     15                    |"<<"1.5               |"<<"7.5	         |"<<endl;
			break;
			
			case 2:
				cout<<"una porcion de 75 g tiene: "<<endl;
				cout<<"__________________________________________________________________________________________________________________"<<endl;
				cout<<"|Calorias(kcal       |"<<"Proteinas(g)           |"<<"Hidratos de carbono(g)     |"<<"Grasas(g)         |"<<"Fibra(g)            |"<<endl; 	
				cout<<"| 49.5               |"<<"12.00                  |"<<"     3.00                  |"<<"0.15              |"<<"0.45	         |"<<endl;
			break;
			
			case 3:
				cout<<"una porcion de 50 g tiene: "<<endl;
				cout<<"__________________________________________________________________________________________________________________"<<endl;
				cout<<"|Calorias(kcal)       |"<<"Proteinas(g)           |"<<"Hidratos de carbono(g)     |"<<"Grasas(g)         |"<<"Fibra(g)            |"<<endl; 	
				cout<<"| 43.9                |"<<"1.60                   |"<<"     6.53                  |"<<"0.40              |"<<"2.67	          |"<<endl;
			break;
			
			case 4:
				cout<<"una porcion de 150 g tiene: "<<endl;
				cout<<"__________________________________________________________________________________________________________________"<<endl;
				cout<<"|Calorias(kcal       |"<<"Proteinas(g)           |"<<"Hidratos de carbono(g)     |"<<"Grasas(g)         |"<<"Fibra(g)            |"<<endl; 	
				cout<<"| 83.3               |"<<"0.47                   |"<<"     17.10                 |"<<"0.54              |"<<"3.00	         |"<<endl;
			break;
		}
		
		
		
	//}(whi)
	
	return 0;
}
