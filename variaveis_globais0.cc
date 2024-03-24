#include <iostream>
using namespace std;

int n1,n2; // Variáveis Globais, elas podem serem acessadas de qualquer lugar, diferentemente das variáveis locais.


int main() {


    // Operadores Matemáticos + - / * % ()

    int res;
    int res1;
    int res2;
    int res3;
    int res4;

    n1=11; // Variável Global
    n2=3; // Variável Global

/* 
Não é necessário declarar as variáveis n1 e n2, porque eu usando importando elas das variáveis globais.
Se eu quiser usar as variáveis n1 e n2 como locais, precisarei declarar elas dentro da função. Ex: int n1 = 512, n2 = 433; 
*/

    int n3=50,n4=80,n5=11,n6=3; // Variáveis locais, elas são guardadas somente dentro da função.
    

    res=(n1+n2+n3+n4)-23;
    res1=n1+n2*n4; // Aqui a prioridade do PC é na multiplicação, em vez da somação.
    res2=(n1+n2)*n4; // Usando as () eu posso dar prioridade na somação, em vez da multiplicação.
    res3=n5/n6; // Divisão de 11 por 3.
    res4=n5%n6; // Pega o valor restante da divisão de n5/n6.

    cout << "Soma de todas as variaveis: " << res << endl;
    cout << "Como o PC faz o calculo: " << res1 << endl;
    cout << "Como eu vejo o calculo: " << res2 << endl;
    cout << "Divisao de 11 por 3: " << res3 << endl;
    cout << "Resto da divisao de 11 por 3: " << res4 << endl;

    return 0;
}