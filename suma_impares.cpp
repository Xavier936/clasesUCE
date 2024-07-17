#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int suma = 0;
 
    for( int i = 1; i <= 10; i++ ){
        if( i % 2 == 1 ) suma += i;
    }
 
    std::cout << "\nLa suma de los numeros impares es: " << suma <<endl;
 
    return 0;

}
