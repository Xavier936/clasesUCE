/* Programa que calcula (a+b)*A[i][j] = a*A[i][j] + b*A[i][j] */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int A[3][3];
	int a,b,i,j;
	
	cout<<"Matriz A 3x3"<<endl;
	for(i = 0;i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un numero para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> A[i][j];
			
		}
	}
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	
	cout<<"La Matriz A es: "<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"********************************"<<endl;
	cout<<"El resultado de (a+b)*A[][] es: "<<endl;
	for(i = 0;i<3;i++){
		for(j =0; j<3; j++){
			cout<<(a*A[i][j])+(b*A[i][j])<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
