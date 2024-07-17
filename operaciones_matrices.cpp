/*Programa de operaciones con matrices*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int A[3][3], B[3][3], C[3][3];
	
	int i,j,z;
	//Ingresamos los valores de la matriz A
	cout<<"Matriz A 3x3"<<endl;
	for(i = 0;i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un numero para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> A[i][j];
			
		}
	}
	//cout<<"Matriz ingresada"<<endl;
	
	cout<<endl;
	//Ingresamos valores a la matriz B
	cout<<"Matriz B 3x3"<<endl;
	for(i = 0;i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un numero para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> B[i][j];
			
		}
	}
	
	
	//Se inicializa la matriz C
	for(i = 0; i<3; i++){
		for(j=0; j<3; j++){
			C[i][j]=0;
		}
	}
	
	//Se gener la Matriz C, se multiplica A*B
	for(i = 0; i<3;i++){
		for(j=0; j<3; j++){
			for(z =0; z<3; z++){
				C[i][j]+= A[i][z]* B[z][j];
			}
		}
	}
	//Presentacion de la matriz A
	cout<<"La Matriz A es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	//Presentacion de la matriz B
	//cout<<"Matriz ingresada"<<endl;
	cout<<"La matriz B es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"*******************"<<endl;
	cout<<"El producto A * B: "<<endl;
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
	//suma de matrices
	cout<<endl;
	cout<<"****************************"<<endl;
	cout<<"La suma de las matrices es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<A[i][j]+B[i][j]<<" ";
		}
		cout<<"\n";
	}
	//Resta de matrices
	cout<<endl;
	cout<<"*****************************"<<endl;
	cout<<"La resta de las matrices es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<A[i][j]-B[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}


