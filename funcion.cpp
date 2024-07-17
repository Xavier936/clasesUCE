#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i,j;
	float M[3][3];
	float y,x;
	cout<<"ingrese los valores para -3 <= x <= 5 : "<<endl;	
	for (i =0; i<3; i++){
		for(j=0; j<3; j++){
			//do{					
					//for(x = -3; x<= 5; x++){
					//cout<<((2/3)*x)+2<<endl;
					
					if(x >= -3 && x<= 5){
					cout<<"x = ";
					cin>>x;
					y = ((2*x)/3)+2;
					M[i][j] = y;
					cout<<"El valor de y en la posicion["<<i<<"]["<<j<<"] es: "<<y<<endl;	
					}else{
						cout<<"Valor fuera de rango"<<endl;
						break;
					}
					
					//}
					
					
					
				
		}
	}
		cout<<endl;
		cout<<"La Matriz Generada es: "<<endl<<endl;
		for (i =0; i<3; i++){
			for(j=0; j<3; j++){
				cout<<M[i][j]<<"   ";
			}
			cout<<endl;
		}
	
	//cout<<y;
	return 0;
	
	
}


