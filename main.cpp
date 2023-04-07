#include <iostream>
#include <locale.h>

void TrocaNumeros(int& num1, int& num2);

int main() {
    setlocale(LC_ALL, "portuguese");

    int num1, num2;
    std::cout << "Digite o valor do primeiro número: " << std::endl;
    std::cin >> num1;
    std::cout << "Digite o valor do segundo número: " << std::endl;
    std::cin >> num2;
    TrocaNumeros(num1, num2);
    std::cout << "Valor do primeiro número: " << num1 << std::endl;
    std::cout << "Valor do segundo número: " << num2 << std::endl;

    return 0;
}

void TrocaNumeros(int& num1, int& num2) {
    int a = num1;
    num1 = num2;
    num2 = a;
}
