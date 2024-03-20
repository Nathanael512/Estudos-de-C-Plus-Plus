#include <iostream>

using namespace std;

int main() {
    int a = 2;
    int b = 4;
    int c = 10; // Posso atribuir um valor na variável usando o operador =.
    int d(30); // Ou posso usar aspas para atribuir também.
    int g(c + d);
    string msg = "Valor de g: ";
    
    cout << "Valor de a: " << a << endl;
    cout << "Valor de b: " << b << endl;
    cout << "Valor de c: " << c << endl;
    cout << "Valor de d: " << d << endl;
    cout << msg << g << endl;

    return 0;
}