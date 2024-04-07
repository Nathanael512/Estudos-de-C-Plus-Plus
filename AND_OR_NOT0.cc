#include <iostream>
using namespace std;

/* -- Tabela AND / && / E

Operador lógico onde o valor de resposta da operação é verdadeiro se todas as variáveis de entrada forem verdadeiras.

x1 | x2 | x1 AND X3
0 | 0   | 0
0 | 1   | 0
1 | 0   | 0
1 | 1   | 1 // Como as duas variáveis são verdadeiras, o retorno é um True.

*/

/* -- Tabela OR / || / OU

Operador lógico onde o valor de resposta da operação é verdadeiro se pelo menos uma das variáveis de entrada for verdadeira. 

x1| x2  | x1 OR X3
0 | 0   | 0 // Nenhuma é verdadeira, então o retorno é False.
0 | 1   | 1 // Uma é verdadeira, então o retorno é True.
1 | 0   | 1 // Uma é verdadeira, então o retorno é True.
1 | 1   | 1 // Como uma das variáveis é verdadeira, o retorno é True.

*/


int main() {

    int num1;
    int num2;
    int num3;
    int num4;


    num1=8;
    if (num1 > 4 && num1 < 7) // Primeira condição deu True mas a segunda deu False, por isso que o else ativou.
    {
        cout << "\n\nValor 1 aceito\n";
    }
    else
    {
        cout << "\n\nValor 1, nao aceito\n";
    }
    
    num2=9;
    if (num2 < 3 || num2 > 8)
    {
        cout << "\nValor 2 aceito\n";
    }
    else
    {
        cout << "\nValor 2, nao aceito\n";
    }

    num3=10;
    if ((num3 >= 4 && num3 <=7) || (num3 >= 10 && num3 < 15) || (num3 > 15 && num3 < 20))
    {
        cout << "\nValor 3 aceito\n";
    }
    else
    {
        cout << "\nValor 3, nao aceito\n";
    }
    
    num4=1; // Aqui posso mudar de True(1) para False(0), para pode mudar o resultado do if.
    if (!num4) // ! (NOT) é um operador. ! (NOT) pode ser usado para inverter os valores. Se o valor da variável for 1(True), ele muda para 0(False). 
    {
        cout << "\nFicarei em casa, hoje!\n";
    }
    else
    {
        cout << "\nSairei de casa, hoje!\n";
    }

 
    return 0;
}