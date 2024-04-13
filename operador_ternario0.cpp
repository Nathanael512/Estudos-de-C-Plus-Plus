#include <iostream>

using namespace std;

int main() {

    // >=60 Aprovado
    // <60 Reprovado

    int nota1,nota2,nota_total;
    string res1;
    string res2;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    nota_total=nota1+nota2;

    // Operador Ternário (If mais simples)
    // (expressão) ? valor1 : valor2;
    
    (nota_total >= 60) ? res1="Aprovado" : res1="Reprovado"; 
    res2=(nota_total >= 60) ? "Aprovado" : "Reprovado"; // É a mesma operação da linha de cima, mas dessa vez o resultado é atribuído na variável res2.

    cout << "\nSituacao o aluno: " << res1 << "\n";
    cout << "\nSituacao o aluno: " << res2 << "\n"; // returna o resultado da variável res2.


    // -- Incremento usando o Operador ternário

    int nota3,x;

    x=5;

    cout << "digite um valor: ";
    cin >> nota3;

    (nota3 >= 5) ? x++ : x--; // Se a nota for igual ou maior que 10, incrementa ou decrementa.

    cout << "\nNovo valor do x: " << x << "\n"; 

    return 0;
}