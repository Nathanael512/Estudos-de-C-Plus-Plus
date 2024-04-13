#include <iostream>
using namespace std;

int main() {

// -- Switch Case Sintaxe --

/*
    switch (expressão)
    {
        case const1:
            comandos;
            break;
        case const2:
            comandos;
            break;
        default:
            comandos;
    }
*/


    int val1;

    cout << "Selecione uma cor: \n";
    cout << "Opcoes de cores: ";
    cout << "[1]=Verde, [2]=Azul, [3] Vermelho\n";

    cin >> val1;

    switch(val1) {
        case 1:        
           cout << "Cor selecionada: Verde\n";
           break;
        case 2:
           cout << "Cor selecionada: Azul\n";
           break;
        case 3:
           cout << "Cor selecionada: Vermelho\n";
           break;
        default:
           cout << "   Valor selecionado inválido\n"; 
    }

    cout << "Selecione uma cor: \n";
    cout << "Opcoes de cores: ";
    cout << "[1, 2, 3]=Verde, [4,5,6]=Azul\n";

    // --- Outra forma de usar o switch case ---

    int val2;

    cin >> val2;

    switch(val2) {
        case 1:        
        case 2:
        case 3:
           cout << "Cor selecionada: Verde\n";
           break;
        case 4:        
        case 5:
        case 6:
           cout << "Cor selecionada: Azul\n";
           break;
        default:
           cout << "   Valor selecionado inválido\n"; 
    }

    // -- Switch Alinhado -- Switch dentro de outro switch.

    int val3;

    cout << "Selecione um transporte:\n";
    cout << "Opcoes: ";
    cout << "[1]=Carro, [2]=Moto, [3]=Helicoptero, [4]=Aviao\n";

    cin >> val3;

     switch(val3) {
        case 1:
        case 2:
           cout << "\nTransporte terrestre\n";
           switch(val3) {
            case 1:
              cout << "Carro selecionado\n";
            break;  
            case 2:
              cout << "Moto selecionada\n";
            break;  
           }
          break;   
        case 3:
        case 4:
           cout << "\nTransporte aereo\n";
           switch(val3) {
            case 3:
              cout << "Helicoptero selecionado\n";
            break;
            case 4:
              cout << "Aviao selecionada\n";
            break;  
           }
        break;

        default:
           cout << "Transporte selecionado invalido\n";     
     }
     
    cout << "Programa finalizado\n";

    return 0;
}