// ============================================================================
// Exercise: IF-ELSE
// Exercício: IF-ELSE
// ============================================================================
// Objective: Practice conditional structures
// Objetivo: Praticar estruturas condicionais
// 
// Tasks:
// Tarefas:
// 1. Create a simple if
// 1. Criar um if simples

// 2. Create if-else
// 2. Criar if-else

// 3. Create if-else if-else
// 3. Criar if-else if-else

// 4. Use relational operators (==, !=, <, >, <=, >=)
// 4. Usar operadores relacionais (==, !=, <, >, <=, >=)

// 5. Create a program that checks if a number is positive/negative/zero
// 5. Criar um programa que verifica se um número é positivo/negativo/zero
//
// Syntax:
// Sintaxe:
// if (condition) { ... }
// if (condição) { ... }

// else if (condition) { ... }
// else if (condição) { ... }

// else { ... }
// else { ... }
// ============================================================================

#include <iostream>
#include <locale>

// Main function entry point 
// Função principal ponto de entrada
int main() {

    // Set locale to Brazilian Portuguese UTF-8 
    // Define locale para português brasileiro UTF-8
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    int number;

    // Output prompt to user 
    // Imprime prompt para o usuário
    std::cout << "Enter a number: ";


    // Read integer input from user 
    // Lê entrada inteira do usuário
    std::cin >> number;

    // If number is greater than zero 
    // Se número é maior que zero
    if (number > 0) { 

        std::cout << "The number is positive." << std::endl; 

    // Else if number is less than zero 
    // Senão se número é menor que zero
    } else if (number < 0) { 

        std::cout << "The number is negative." << std::endl; 

        // Else (number is zero) 
        // Senão (número é zero)
    } else { 

        std::cout << "The number is zero." << std::endl;
    }
    return 0; 
}