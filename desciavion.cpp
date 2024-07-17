#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int M[3][3];
	int SumM = 0,i,j;
	float  med = 0,desvstd= 0,varianza =0;
	
	for(i = 0; i<3;i++){
		for(j =0; j<3; j++){
			cout<<"Digite un la medida en cm para la poscicion ["<<i<<"]["<<j<<"]: ";
			cin>> M[i][j];
		}
	}
	cout<<"Matriz ingresada"<<endl;
	for(i=0; i<3; i++){
		for(j=0; j<3;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	for(i = 0; i<3;i++){
		for(j =0; j<3; j++){
			SumM += M[i][j];
		}
	}
	
	med = SumM / 9;
	
	for(i = 0; i<3;i++){
		for(j =0; j<3; j++){
			varianza += varianza + pow(M[i][j]-med,2); 
		}
	}
	
	desvstd = sqrt(varianza/9-1);
	
	cout<<desvstd;
	
	return 0;
}
