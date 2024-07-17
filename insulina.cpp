#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int insu[3][3]; // declaro la matriz
	int i,j; // declaro los incializadores de las filas y columnas
	
	// ingreso datos en la matriz
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digite los niveles de insulina para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> insu[i][j];
			
		}
	}
	cout<<endl;
	
	//Presento la matriz
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			
			cout<<insu[i][j]<<"  ";
			
		
		}
		cout<<endl;
	}
	
	cout<<endl;
	//recorro la matriz y evaluo cada valor ingresado
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			
			if(insu[i][j] > 100){
				cout<<"Paciente Hiperglucemico en la posicion ["<<i<<"]["<<j<<"]"<<endl;
			}else if(insu[i][j] < 60){
				cout<<"Paciente Hipoglucemico en la posicion ["<<i<<"]["<<j<<"]"<<endl;
				}
			
		
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
