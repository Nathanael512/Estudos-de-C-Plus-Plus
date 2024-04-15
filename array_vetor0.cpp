#include <iostream>
using namespace std;

int main() {

    //int vetor[5]; // Declaração de vetor, nesse caso com cinco posições. 
    int i;
    //int tamanho=8; // Forma de facilitar a modificação sem usar o Sizeof. 
    //int vetor[tamanho]; // Usa os valores da variável 'tamanho' para serem os valores da array 'vetor'.
    int vetor[8]={10,20,30,40,50,60,70,80}; // Atribui os valores da array na declaração.  
    
/*
    vetor[0]=10; // Atribuindo um valor no índice 0.
    vetor[1]=20; // Atribuindo um valor no índice 1.
    vetor[2]=30; // Atribuindo um valor no índice 2.
    vetor[3]=40; // Atribuindo um valor no índice 3.
    vetor[4]=50; // Atribuindo um valor no índice 4.

    cout << vetor[0] << "\n"; // Printa o valor do índice 0 da array.
*/

    // --- For normal ---


    for (i = 0; i < 5; i++) // Usa o FOR para mostra os valores da array. 
    {
        cout << vetor[i] << "\n"; // mostra os valores no terminal.
    }


    // --- For usando Sizeof ---


    for (i = 0; i<sizeof(vetor)/4; i++) // Sizeof retorna os valores em bytes. Para mostra os valores em vez dos bytes, tenho que dividir por 4 com operador /.
    {
        cout << vetor[i] << "\n"; // mostra os valores no terminal.
    }


    return 0;

}