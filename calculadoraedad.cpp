#include <stdio.h>
#include <iostream>
int main (){
    
        int edad;
        char conti;

        do {
    std::cout <<"Ingrese su edad.";
    std::cin >> edad;
    if (edad >= 18) {
        std::cout <<"Usted es mayor edad, por lo tanto puede comprar alcohol."<< std::endl;
    } else {
        std::cout <<"usted es menor de edad, por lo tanto NO puede comprar alcohol."<< std::endl;
    } 
    std::cout << "¿Desea continuar? (y/n): ";
    std::cin >> conti;
    }  while (conti != 'n' && conti != 'N');
    return 0;
}
