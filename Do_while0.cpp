#include <iostream>
using namespace std;


int main() {

// -- While --

    int cont1;

    cont1=0;
    while (cont1++ < 20)
    {
        cout << "Executando While.." << cont1 << "\n";
    }

    cout << "\nRotina 1 finalizada\n\n";
    
// -- Do While --

    int cont2;


    cont2=30;
    do {
        cout << "Executando Do While.." << cont2 << "\n";
        cont2+=2; // Incrementa de 2 em 2.
    }while (cont2 < 50);

    cout << "\nRotina 2 finalizada\n\n";   

    return 0;

}