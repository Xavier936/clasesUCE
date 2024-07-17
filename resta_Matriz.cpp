#include<iostream>


using namespace std;

int main(){
	int i, j;
	//delcaracion de las matrices A y C
	int A[3][3];
	int C[3][3];
	
	
	int RA[3][3]; // almecenara los valores de 3A
	int RC[3][3]; //almacenara los valores de 4C
	
	int RAC[3][3]; // almecenara los resultados de 3A-4C
	
	//llenado la matriz A
	cout<<"LLenado de la matriz A"<<endl;
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digite los valores para la posicion ["<<i<<"]["<<j<<"]: ";
			cin>> A[i][j];
			
		}
	}
		cout<<endl;
	//Llenado de la matriz C
	cout<<"LLenado de la matriz C"<<endl;
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Digite los valores para la posicion ["<<i<<"]["<<j<<"]: ";
			cin>> C[i][j];
			
		}
	}
	
	//Calculamos 3A
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			RA[i][j]= 3*A[i][j];
			
		}
	}
	
		//Calculamos 4C
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			RC[i][j]= 4*C[i][j];
			
		}
	}
	
		//Calculamos 4C
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			RAC[i][j]= RA[i][j] / RC[i][j];
		}
	}
		cout<<endl;
	//Presentams la matriz A
	cout<<"La matriz A es : "<<endl;
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
		cout<<endl;
	//Presentams la matriz C
	cout<<"La matriz C es : "<<endl;
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<C[i][j]<<"  ";
		}
		cout<<endl;
	}
		cout<<endl;
	//Presentams la matriz resultante de 3A-4C
	cout<<"La matriz resultante de 3A-4C es : "<<endl;
	for(i =0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<RAC[i][j]<<"  ";
		}
		cout<<endl;
	}
}
