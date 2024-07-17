#include <iostream>
#include <conio.h>
#include "stdlib.h"


using namespace std;


int main(int argc, char * argv[]){
	int num, divisor = 1, residuo = 0;
	
	cout<<"Ingrese un numero: "<<endl;
	cin>>num;
	
	do{
		if(num % divisor == 0){
			residuo++;
		}
		divisor++;
	}while(divisor <= num);
	
	if(residuo == 2){
		cout<<"el numero "<<num<<" Si es primo"<<endl;
	}else{
		cout<<"el numero "<<num<<" no es primo"<<endl;
	}
	
	system("PAUSE");
	return 0;
		
}






/*
	int division = 1;
	int residuo = 0;
	
	do{
		if(n % division == 0){
			residuo++;
		}
		division++;
	}while(division <= n);
	
	if(residuo == 2) cout<<"El numero "<<n<<" es primo"<<endl;
	else cout<<"El numero "<<n<<" no es primo"<<endl;
	return 0; 
*/
