#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
using namespace std;
float PI = 3.1416;
float longitud(float rad){
	float l;
	//float PI = 3.1416;

	l = 2 * PI * rad;
	return l;
		
}


float area_circunferencia(float radio){
	float area;
	area = PI*(radio*radio);
	return area;
}

int factorial(int n) {
   if(n < 0) return 0;
   else if(n > 1) return n*factorial(n-1);
   return 1;
}

int cuadrado_perfecto(int n){
	int i;
	int n2;
	n2 = pow(n,0.5);
	int s = 0;
	
	for(i = 1; i<=n2; i++){
		s += 2*i-1;
	}
	
	//printf("el valor es: %d\n", &s);
	
	if(s == (n)){
			cout<<"El numero "<<n<<" es cuadrado perfecto"<<endl;
		}else{
			cout<<"El numero "<<n<<"  no es cuadrado perfecto"<<endl;
		}
	
	return 1;
}

int primo(int n = 0){
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
}
