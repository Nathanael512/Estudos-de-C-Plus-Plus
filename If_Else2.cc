#include <iostream>
using namespace std;

int main() {

    int nota1,nota2,resto;
    char reset;

    inicio:

    cout << "Digite o valor da nota 1: " << endl;
    cin >> nota1;
    cout << "Digite o valor da nota 2: " << endl;
    cin >> nota2;

    resto=nota1+nota2; 

    if (resto >=70)
    {
        cout << "Aluno Aprovado!!" << endl;
    }
    else if (resto >=50)
    {
        cout << "Aluno em recuparação!!" << endl;
    }
    else
    {
        cout << "Aluno Reprovado!" << endl;
    }
    

    cout << "Reset? [s/n]: " << endl;
    cin >> reset;
     
    if (reset == 'S' or reset == 's')
    {
        goto inicio;
    }
    
    return 0;

}
