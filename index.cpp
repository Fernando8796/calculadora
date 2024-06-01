#include <iostream>
using namespace std;

int main() {

    int operador;
    int a, b;
    
    // Printando as opções disponíveis
    cout << "Escolha um operador:\n";
    cout << "[1] Adição\n";
    cout << "[2] Subtração\n";
    cout << "[3] Multiplicação\n";
    cout << "[4] Divisão\n";

    // Pegando o operador
    cout << "> ";
    scanf("%d", &operador);
    
    // Estrutura switch para as opções
    switch(operador) {

        // Caso adição
        case 1:
            cout << "Número 1: ";
            scanf("%d", &a);
            cout << "Número 2: ";
            scanf("%d", &b);
            cout << "O resultado é: " << a + b << "\n";
            break;
        case 2:
            cout << "Número 1: ";
            scanf("%d", &a);
            cout << "Número 2: ";
            scanf("%d", &b);
            cout << "O resultado é: " << a - b << "\n";
            break;
        case 3:
            cout << "Número 1: ";
            scanf("%d", &a);
            cout << "Número 2: ";
            scanf("%d", &b);
            cout << "O resultado é: " << a * b << "\n";
            break;
        case 4:
            cout << "Número 1: ";
            scanf("%d", &a);
            cout << "Número 2: ";
            scanf("%d", &b);
            cout << "O resultado é: " << a / b << "\n";
            break;
        default:
            cout << "Erro de input! tente novamente!\n";
    }

    return 0;
}
