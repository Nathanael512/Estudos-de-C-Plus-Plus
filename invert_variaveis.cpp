#include <iostream>
using namespace std;

// -- Invertendo os valores das variáveis --

int main() {

    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    cout << "Valor Inicial(num1): " << num1 << endl;

    // Método tradicional (*-)
    num1 = num1 * -1;
    cout << "Invertendo para negativo: " << num1 << endl;
    num1 = num1 * -1;
    cout << "Invertendo para positivo: " << num1 << endl; // Aqui mando inverter novamente, passando de -10 para 10 (o mesmo valor do inicial).  

    // Método com operador de negação(subtração)
    cout << -num2 << endl; // Ele não guarda o valor na variável, ele só faz momentaneamente.
    cout << num2 << endl; // Como a operação não atualiza nada.. quando mando printar novamente, o valor resultante é o valor inicial. 
     
    // Método simplificado
    
    cout << "Valor inicial(num3): " << num3 << endl;
    num3+=10;
    cout << "Valor com mais 10: " << num3 << endl;
    num3-=10;
    cout << "Valor com menos 10: " << num3 << endl;
    num3=-num3; // Inverte o valor, a lógica é praticamente a mesma da variável num2, só que dessa faz não é momentaneamente.
    cout << "Inverte o valor: " << num3 << endl;

    return 0;
}