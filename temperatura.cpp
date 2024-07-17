#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float temperatura[3][3]; // declaro la matriz
	int i,j,cont1=0,cont2=0; // declaro los incializadores de las filas y columnas y de los contadores
	
	// ingreso datos en la matriz
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digite los niveles de temperatura para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> temperatura[i][j];
			
		}
	}
	cout<<endl;
	
	//Presento la matriz
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			
			cout<<temperatura[i][j]<<"  ";
			
		
		}
		cout<<endl;
	}
	
	cout<<endl;
	//recorro la matriz y evaluo cada valor ingresado
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			
			if(temperatura[i][j] > 37.2){
				cont1++;
			}else {
				cont2++;
				}
			
		
		}
		cout<<endl;
	}
	
	cout<<cont1<<" personas tienen temperatura alta"<<endl;
	cout<<cont2<<" personas tienen temperatura normal"<<endl;
	
	
	return 0;
}
