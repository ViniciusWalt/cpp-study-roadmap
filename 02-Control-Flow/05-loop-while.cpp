// ============================================================================
// Exercise: WHILE LOOP
// Exerc�cio: Loop WHILE
// ============================================================================
// Objective: Practice loops with while
// Objetivo: Praticar loops com while
// 
// Tasks:
// Tarefas:

#include <iostream>
#include <locale.h>
#include <string>

int main() {
    setlocale(LC_ALL, "");

// 1. Create a while that executes while condition is true
// 1. Criar um while que executa enquanto condi��o for verdadeira

    int i = 1;
    while (i <= 5) {
        std::cout << i << std::endl;
        i++;
    }

// 2. Create a program that asks for password until correct
// 2. Criar um programa que pede senha at� acertar
   
    std::string senha;
    do {
        std::cout << "Digite a senha: ";
        std::cin >> senha;
    } while (senha != "1234");
        std::cout << "Senha correta!" << std::endl;

// 3. Use while for input validation
// 3. Usar while para valida��o de entrada

    int idade;
    std::cout << "Digite sua idade (Maior que 0): ";
    std::cin >> idade;
    while (idade <= 0) {
        std::cout << "Idade inv�lida. Digite novamente: ";
        std::cin >> idade;
    }

    return 0;
}

// ============================================================================

