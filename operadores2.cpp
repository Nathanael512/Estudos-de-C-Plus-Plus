#include <iostream>
#include <cmath>
using namespace std;

// Eu estou usando os tipos 'double', mas não sei, se os tipos 'float' tbm servem.


// Operadores 2 - Elevação de números.

// -- Variáveis Globais --

// --- Multiplicação ---

// Multiplicador 

 double expoente1 = 3.0;
 double expoente2 = 6.0;
 double expoente3 = 9.0;
 double expoente4 = 12.0;

// Multiplicado

double base1 = 2.0;
double base2 = 5.0;
double base3 = 10.0;
double base4 = 100.0;
double base5 = 700.0;


int main() {
    // pow() serve para fazer a operação de elevação.
    
    cout << "2 ^ 3: " << pow(base1, expoente1) << endl;
    cout << "10 ^ 9: " << pow(base3, expoente3) << endl;

    return 0;
}
