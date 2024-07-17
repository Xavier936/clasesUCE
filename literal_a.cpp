#include <iostream>

using namespace std;

int main(){
	float peso;
	do{
		cout<<"digite 0 para salir"<<endl;
		cout<<"ingrese el peso en Kg: ";
		
	cin>>peso;
	if(peso >=5.4 && peso <=7.7 ){
		cout<<"Administre una dosis  2.5 mL"<<endl;
	}else if(peso >=8 && peso <=10 ){
		cout<<"Administre una dosis  4 mL"<<endl;
	}else if(peso >=10.5 && peso <=15.5 ){
		cout<<"Administre una dosis  5 mL"<<endl;
	}else if(peso >=16 && peso <=21 ){
		cout<<"Administre una dosis  7.5 mL"<<endl;
	}else if(peso >=21.5 && peso <=26.5 ){
		cout<<"Administre una dosis  10 mL"<<endl;
	}else if(peso >=27 && peso <=32 ){
		cout<<"Administre una dosis  12.5 mL"<<endl;
	}else if(peso >=32.5 && peso <=43 ){
		cout<<"Administre una dosis  15 mL"<<endl;
	}else if(peso >=43.5 ){
		cout<<"Administre una dosis  20 mL"<<endl;
	}
	}while(peso != 0);
	return 0;
}
