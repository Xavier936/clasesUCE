#include <iostream>

using namespace std;

int main(){
	double gramos, kcal, lipidos,proteinas,azucar, fibra, colesterol, carbo;
	cout<<"Programa para calcular el valor nutricional de la zanahoria"<<endl;
	cout<<"Ingrese su consumo de zanahoria en gramos(g): ";
	cin>>gramos;
		
	do{
		
	
		kcal = gramos * 0.41;
		lipidos = gramos * 0;
		proteinas = gramos * 0.01;
		carbo = gramos * 0.1;
		azucar = gramos * 0.05;
		fibra = gramos * 0.03;
		colesterol = (gramos* 0)/1000;
		
		cout<<endl;
		cout<<"      Calculadora nutricional"<<endl;
		cout<<endl;
		cout<<"Gramos ingresados: "<<gramos<<" g "<<endl;
		cout<<"Calorias(grasas): "<<kcal<<" kcal "<<endl;
		cout<<"Lipidos(grasas): "<<lipidos<<" g "<<endl;
		cout<<"Proteinas: "<<proteinas<<" g "<<endl;
		cout<<"Carbohidratos: "<<carbo<<" g "<<endl;
		cout<<" *Azucar: "<<azucar<<" g "<<endl;
		cout<<" *Fibra alimentaria: "<<fibra<<" g "<<endl;
		cout<<"Colesterol: "<<colesterol<<" g "<<endl;
		
		system("pause");
		system("cls");
		cout<<"Ingrese su consumo de zanahoria en gramos(g): ";
		cin>>gramos;
	}while(gramos != 0);

	return 0;
}
