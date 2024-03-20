#include <iostream>
using namespace std;

int main(){

    // Tipo nome;
    // Tipo nome = valor;
    
    int vidas; // Ex: 10, 25, e etc.
    //int vidas1=1; // Nesse aqui, a variável já recebeu um dado quando foi criada.
    char letra; // Ex: "B". O char recebe somente um carácter.
    //char letra1='N'; // Aqui a variável já recebeu um dado quando foi criada.
    //char letras[20]; // Com isso, a variável vira um vetor, agora pode inserir mais de um carácter. Cada letra vai ficar numa posição do vetor.
    double decimal; // Ex: 2.499999.
    //double decimal1=5.5; // Aqui a variável já recebeu um dado quando foi criada.
    //float decimal2; // Ex: 2.5. float e double são parecidos, a diferença é que o float tem uma precisão menor. 
    //bool vivo; // True=verdadeiro (1) / False=falso (0)
    //bool vivo1=1; // Aqui a variável já recebeu um dado quando foi criada.
    string nome; // "Ayako"
    //string nome1="Tomie"; // Aqui a variável já recebeu um dado quando foi criada.

//  Posso iniciar um comentário no código com // para comentar 1 linha, ou posso inicializar com /* e fechar com */. Para comentários maiores. 

// -- Comentário de linha --
/* -- Comentários de múltiplas linhas -- */


   /*cout << vidas1 << "\n";
   //cout << vivo << "\n";
   //cout << vivo1 << "\n";
   //cout << decimal1 << "\n";
   cout << letra1 << "\n"; */



   cout << "Digite o numero de vidas: "; 
   cin >> vidas; // 
   cout << "Digite uma letra: "; 
   cin >> letra; // 
   cout << "Dinheiro: "; 
   cin >> decimal;
   cout << "Digite seu nome: ";
   cin >> nome; 


   cout << "\n" << vidas << "\n" << letra << "\n" << decimal << "\n" << nome << "\n";

    return 0;
}