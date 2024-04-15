#include <iostream>
using namespace std;

int main() {

    // -- Forma Manual --

    // int matriz [L][C]; // Sintaxe da matriz bidimensional.
    int matriz[3][4]; // Primeiro é declarado as linhas[L] e depois é declarado as colunas[C]. 
    int l,c; // Índices para o FOR, L de linha e C de coluna. 
     


    // Linha 1
    matriz[0][0]=0; 
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    // Linha 2
    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    // Linha 3
    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;

    cout << "Matriz manual: " << "\n";

    for(l=0;l<3;l++) {
        for (c=0;c<4;c++) {
            cout << matriz[l][c] << " ";
        }
        cout << "\n"; // Se não tiver o "\n", as linhas ficarão alinhadas lado a lado. 
    }


    // -- Forma Automática: Usando FOR para inserir os valores --

    int matriz_auto[6][8]; // Matriz
    int auto_linha,auto_coluna; // Índices

    cout << "\nMatriz automaticas: " << "\n";

    for (auto_linha=0; auto_linha<6; auto_linha++)
    {
        for (auto_coluna=0; auto_coluna<8; auto_coluna++)
        {
            matriz_auto[auto_linha][auto_coluna]=auto_linha; // =auto_linha; Adiciona os valores da linha.
        }       
    }


    for (auto_linha=0; auto_linha<6; auto_linha++)
    {
        for (auto_coluna=0; auto_coluna<8; auto_coluna++)
        {
            cout << matriz_auto[auto_linha][auto_coluna] << " ";
        }
        cout << "\n";
    }

    // -- Forma Automática: Usando INPUT para inserir os valores --

    int matriz_auto_e_inserida[2][3]; // Matriz
    int inserindo_linha,inserindo_coluna; // Índices

    cout << "\nMatriz semi-automaticas: " << "\n"; // Semi-automáticas, porque a matriz só tem os índices, os valores são obtidos através de input.

    for (inserindo_linha=0; inserindo_linha<2; inserindo_linha++)
    {
        //cout << "Inserir os valores da matriz semi-auto: " << "\n"; // 
        for (inserindo_coluna=0; inserindo_coluna<3; inserindo_coluna++)
        {          
            cin >> matriz_auto_e_inserida[inserindo_linha][inserindo_coluna]; // Para receber os valores do usuário. 
        }     
    }


    for (inserindo_linha=0; inserindo_linha<2; inserindo_linha++)
    {
        for (inserindo_coluna=0; inserindo_coluna<3; inserindo_coluna++)
        {
            cout << matriz_auto_e_inserida[inserindo_linha][inserindo_coluna] << " ";
        }
        cout << "\n";
    }
    

    return 0;
    
}