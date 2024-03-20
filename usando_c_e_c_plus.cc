#include <iostream>
#include <stdio.h> // Usando biblioteca do C.
using namespace std;


int main() {
    // Sem namespace std
    std::cout << "Quebrando em C!!\n"; // quebrando a linha, usando C. 
    std::cout << "Quebrando em C++!!" << std::endl; // quebrando a linha, usando C++.

    // Com namespace std

    cout << "Usando std globalmente";

    // Usando funções do C


    printf("\nUsando biblioteca do C");
    puts("\nIrma do printf"); // puts tem a mesma função do printf.

    return 0;
}