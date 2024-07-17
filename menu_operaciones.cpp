#include <iostream>
#include "stdlib.h"
#include "math.h"

using namespace std;

int main(){
	int opcion,x =3, y = 7, z = 9,a,b,c;
	
	
	do {
		cout<< "  *MENU PRINCIPAL*" <<endl;
		cout<< "1.Promedio" <<endl;
		cout<< "2.Potencia" <<endl;
		cout<< "3.Raiz" <<endl;
		cout<< "11.Salir" <<endl;
		cout<<"Digite el numero del ejercicio:"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"x: "<<x<<endl;
				cout<<"y: "<<y<<endl;
				a =( x + y)/2;
				cout<<a;
			break;
				
			case 2:
				cout<<"x: "<<x<<endl;
				cout<<"y: "<<y<<endl;
				cout<<"z: "<<z<<endl;
				a = pow(x,2);
				b = pow(y,2);
				c = pow(z,2);
				cout<<a<<endl<<b<<endl<<c<<endl;
			break;
		
		case 3:
			cout<<"x: "<<x<<endl;
			cout<<"y: "<<y<<endl;
			cout<<"z: "<<z<<endl;
			a = sqrt(x);
			b = sqrt(y);
			c = sqrt(z);
			cout<<a<<endl<<b<<endl<<c<<endl;
		break;
				
		}
	}while(opcion <= 3);
	return 0;
}
