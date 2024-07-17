#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;


int main(){
	int matriz[3][3];// se declara la matriz 3x3
	int n,i,j,f,c;
	bool verifica = false;
	
	cout<<"Matriz A 3x3"<<endl;
	for(i = 0;i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un numero para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> matriz[i][j];
			
		}
	}
	
	cout<<"Matriz ingresada"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<matriz[i][j]<<" "; // imprimo la matriz ingresada
		}
		cout<<"\n";
	}
	cout<<"**********************************************"<<endl;
	cout<<"Que numero desea buscar?: "; // pido el valor a buscar
	cin>>n;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			if(n == matriz[i][j]){ // compara el valor ingresado con cada uno de los valores de la matriz
				c = j; // almaceno la columna donde esta el valor
				f = i; // almacena la fila donde esta el valor
				verifica = true; // valor que me devuelve si el valor es encontrado
				
			}
		}
	}

	if(verifica == true){
		cout<<"El valor "<<n<<" esta en la columna "<<c<<" y en la fila "<<f<<endl; // se imprime las coordenas del valor ingresado
	}else{
		cout<<"Valor no encontrado "<<endl; // mensaje en caso de encontrar el valor en la matriz
		
	}	
	
	
	
	return 0;
}
