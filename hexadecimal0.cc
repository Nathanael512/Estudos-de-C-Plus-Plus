#include <iostream>
using namespace std;

// -- Convertendo decimal para hexadecimal -- 

int main() {

    int decimal;

    // Solicita o número decimal do usuário

    cout << "Digite o decimal: " << endl;
    cin >> decimal;

    // Define o formato de saída para hexadecimal

    cout << "Hexadecimal: " << hex << decimal << endl;

    return 0;

}