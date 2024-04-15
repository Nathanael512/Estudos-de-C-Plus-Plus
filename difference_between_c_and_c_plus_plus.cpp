#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    // - C - Código em C.

    char nome1[30]; // No C não existe o tipo string, então tem que ser usado o char, o número dentro dos colchetes[] significam, o número de carácteres da variável.   
    int idade1;
    float altura1;

    scanf("%s %d %f", &nome1, &idade1, &altura1);
    printf("%s tem %d anos e mede %f metros.\n", nome1, idade1, altura1);



    // - C++ - Código em C++.

    string nome2;
    int idade2;
    float altura2;

    cin >> nome2 >> idade2 >> altura2;
    cout << nome2 << " tem " << idade2 << " anos e mede " << altura2 << " metros"; 

    return 0;

}





