#include <iostream>
using namespace std;

int main() {

// -- Rotina 1 --

    int n;

    n=0;

    while (n < 10)
    {
        cout << n << "\n";
        n++; // Incrementa 1, enquanto(while) for menor que 10. Quando 'n' for maior que 10, o programa finaliza. 
    }    

    cout << "Rotina 1 finalizada\n";

// -- Rotina 2 --

    int m;

    m=10;

    while (m>=10 && m<20) 
    {
        cout << m << "\n";
        m++;
    }
    
    cout << "Rotina 2 finalizada\n";


// -- Rotina 3 --

    int i;

    i=4;

    while (i < 10)
    {
        cout << i << "\n";
        cin >> i;
    }

    cout << "Rotina 3 finalizada\n";
    
// -- Rotina 4 --

int cont1;

    cont1=0;

    while (cont1 < 20)
    {
        cout << "escrevendo..." << cont1 << "\n";
        cont1+=2; // cont1++ incrementa de 1 em 1, para incrementar mais por vez, posso fazer assim: cont1+=2; 
    }

    cout << "Rotina 4 finalizada\n";
    
// --- Rotina 4 invertida ---

int cont2;

cont2=20;

while (cont2 > 0) // Ou posso incrementar ou decrementar direto na expressão, por exemplo: while (cont2++ > 20) {} ou while (cont2--) {}. 
    {
        cout << "escrevendo invertido..." << cont2 << "\n";
        cont2--;
    }

    cout << "Rotina 4 Invertida finalizada\n";

// --- Rotina 5 --- Usando o break

int cont3;

cont3=40;

while (cont3++<100) // Incrementa até chegar a 100.
{
    cout << "Escrevendo ate parar..." << cont3 << "\n";
    if (cont3 == 70) // Usando o If para parar antes. 
    {
        break; // Para o incremento quando chega no valor 70.
    }    
}


    return 0;
}