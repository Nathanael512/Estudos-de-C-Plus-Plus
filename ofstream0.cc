#include <iostream>
#include <fstream>

using namespace std;

int main() { 

    //ofstream, ifstream, fstream

    ofstream arquivo;

    //arquivo.open("C:\\Users\\natha\\OneDrive\\Documentos\\DEV\\DEV Test\\Linguagens\\C++\\C++\\arquivo1.txt");
    arquivo.open("C:\\Users\\natha\\OneDrive\\Documentos\\DEV\\DEV Test\\Linguagens\\C++\\C++\\arquivo_ofstream0.txt", ios::app);
    // ios::app posiciona o cursor no final e inseri o conteúdo na sequência.

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1; // Retornar um código de erro.
    }

    arquivo << "Escrevendo no arquivo\n"; // \n para quebra a linha.
    arquivo << "Escrevendo no arquivo 1\n"; // \n para quebra a linha.
    arquivo << "Escrevendo no arquivo 2\n"; // \n para quebra a linha.
    arquivo << "Escrevendo no arquivo 3\n"; // \n para quebra a linha.
    arquivo.flush(); // Garantir que o buffer seja limpo e os dados sejam gravados no disco.

    arquivo.close();

    return 0;
}
