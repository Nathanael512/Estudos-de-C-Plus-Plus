#include <iostream>
using namespace std;
#include <cstdlib> // Biblioteca importada para limpar o terminal.

int main() {

    // -- If e Else - Parte 1 --
    int num1=10;
    int num2=30;
    int sol=1; // valor 1 seria como um True, se eu coloque-se 0 seria como um false.
    int lua=0;

    if (num1 < num2)
    {
        cout << "Num1 tem um valor menor que Num2!" << endl;
    }
    else
    {
        cout << "Num1 tem um valor maior que Num2!" << endl;
    }

    if (sol == 1) // Se sol for True(1) 
    {
        cout << "Vou ficar um pouco no Sol, hoje!" << endl;        
    }
    else // Se sol for False(0)
    {
        cout << "Nem vou pegar Sol, hoje" << endl;
    }
    
    if (lua)  // Para tipos Int e Bool, não é preciso usar os operadores. Quando o valor da variável é 0 ou 1.
    {
        cout << "Vou assistir o luar, hoje!" <<  endl;
    }
    else
    {
        cout << "Nem vou ver o luar, hoje!" << endl;
    }

    // -- If e Else - Parte 2 --
    int n1,n2,res;
    char opc;

    inicio: // Esse é um comando goto.
    system("cls"); // Limpa o terminal

    cout << "Digite o valor da nota 1: " << endl;
    cin >> n1; // cin é usado para ter um input do usuário.
    cout << "Digite o valor da nota 2: " << endl;
    cin >> n2;

    res= n1+n2;

    /*
    >= 60 - Aprovado!
    >= 40 <60 - Recuperação!
    <40 - Reprovado!
    */

    if (res >= 60)
    {
        cout << "Aluno Aprovado!" << endl;
    }
    else if (res >=40)
    {
        cout << "Aluno em recuperacao!" << endl;
    }
    else 
    {
        cout << "Aluno Reprovado!" << endl;
    }
    
    cout << "Digitar outras notas? [s/n]: " << endl;
    cin >> opc;

    if (opc == 's' or opc == 'S')
    {
        goto inicio; // Volta a executar o programa a partir do goto que está sendo apontado.
    }
     

    return 0;
}