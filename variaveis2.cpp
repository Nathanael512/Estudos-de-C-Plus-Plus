#include <iostream>
#include <cmath>
using namespace std;


int main() {
    // Variáveis locais 

    int n1=47;
    int n2=7;
    int n3=457;
    int n4=6789;
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);
    float decimalP=7.8;
    float decimalB=9.6;
    float resultf=decimalP+decimalB;
    char A ='A';
    char y ='y';
    char k ='k';
    char o ='o';
    char a ='a';
    char H = 'H';
    char M = 'M';
    char F = 'F';
    string nome1 = "Haruka";
    string nome2 = "Matsuri";
    string nome3 = "Fumika";


    // Cálculos

    cout << "O resultado de 47 vezes 7 mais 6789 e dividido por 457 é: " << ((n1*n2)+n4)/n3 << endl;
    cout << "O resultado de " << base << " elevado a " << exponent << " é: " << result << endl;
    cout << "O resultado de " << decimalP << " mais " << decimalB << " é: "<< resultf << endl;
    cout << "Char's concatenados: " << A << y << a << k << o << endl; // Formando palavras com tipos char.
    cout << "Letra inicial: "<< H << " Nome: " << nome1 << endl;
    cout << "Letra inicial: "<< M << " Nome: " << nome2 << endl;
    cout << "Letra inicial: "<< F << " Nome: " << nome3 << endl;
    cout << nome3.substr(0, 3) << endl; // selecionar somente, carácteres específicos.

    return 0;
}