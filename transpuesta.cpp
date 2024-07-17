/* Programa para obtener la matriz transpuesta */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[3][3];
	int i,j;
	for(i = 0; i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un numero para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> numeros[i][j];
		}
	}
	
	cout<<"Matriz ingresada"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Matriz Transpuesta"<<endl;
	
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	
	
	return 0;
	
}
