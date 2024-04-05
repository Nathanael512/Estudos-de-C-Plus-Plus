#include <iostream>
using namespace std;

/* -- Formas de incrementar e decrementar 

--- Forma normal --- 

    n1=n1+10;
    n1=n1-5;


--- Forma simples ---
    
    n1+=20;
    n1-=10;
    n1++;  
    n1--;

*/

int main() {

    int n1, n2, n3;
    int op1;
    int Fix1; // preFix de pré-fixado e pós-fixado. 
    
    // --- Variáveis ---

    n1=0;
    n2=10;
    n3=3;
    op1=200;
    Fix1=100;
 

    cout << "Valor inicial da variavel n1: " << n1 << endl; // Mostra o valor atribuído a variável.
    n1=n1+10; // Fazendo incremento na variável, se ele é 0, ele vai ser 0 + 10.
    cout << "Valor incrementado na variavel n1: " << n1 << endl; // Novo valor após o incremento na variável.
    n1=n1-5; // Decrementa - 5 no valor da variável.
    cout << "Valor decrementado na variavel n1: " << n1 << endl << endl; // Novo valor após o decremento na variável.


    cout << "Valor inicial da variavel n2: " << n2 << endl;  // Mostra o valor atribuído a variável.
    n2+=20; // Essa é uma incrementação na variável, feita na forma simples.
    cout << "Valor incrementado na variavel n2: " << n2 << endl; // Novo valor após o incremento na variável.
    n2-=10;
    cout << "Valor decrementado na variavel n2: " << n2 << endl << endl; // Novo valor após o decremento na variável.
    

    cout << "Valor inicial da variavel n2: " << n3 << endl;
    n3++; // Incremento mais simples, porém quando é usado com operador de adição, só é incremento +1 ao valor, diferentemente do jeito normal.
    cout << "Valor incrementado na variavel n3: " << n3 << endl;
    n3--; // Decremento mais simples, com a mesma regra do incremento simples com operador de adição. 
    cout << "Valor decrementado na variavel n3: " << n3 << endl << endl;

    // Usando essa forma mais simples com outros operadores, a regra de +1, não vale. 
    cout << "Valor inicial da variavel op1: " << op1 << endl;
    op1*=4;
    cout << "Multiplica por 4: " << op1 << endl;
    op1/=2;
    cout << "Divide por 2: " << op1 << endl << endl;

    // --- Pré e Pós fixados ---

    //  ++Fix1    Pré-fixado. Incrementa e decremento antes de printar.  
    //  Fix1++    Pós-fixado. Incrementa e decremento depois de printar.

    cout << "Valor Inicial: " << Fix1 << endl;
    cout << "Valor Pre-Incrementado: " << ++Fix1 << endl; // Adiciona antes de printar. 
    cout << "Valor Pre-Decrementado: " << --Fix1 << endl; // A
    cout << "Valor Pos-Incrementado: " << Fix1++ << endl; // A
    cout << "Valor Final: " << Fix1 << endl; //
    //cout << Fix1 << endl; 

    return 0;
}