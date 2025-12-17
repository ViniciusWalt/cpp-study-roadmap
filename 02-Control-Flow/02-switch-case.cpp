// ============================================================================
// Exercise: SWITCH-CASE
// Exercício: Switch-Case
// ============================================================================
// Objective: Practice switch-case structures
// Objetivo: Usar switch para múltiplas opções
// 
// Tasks:
// Tarefas:
// 1. Create a menu with switch-case
// 1. Criar um menu com switch-case

// 2. Implement different cases (case)
// 2. Implementar diferentes casos (case)

// 3. Use 'break' to exit each case
// 3. Usar 'break' para sair de cada caso

// 4. Implement 'default' for unforeseen cases
// 4. Implementar 'default' para casos não previstos

// 5. Create a simple calculator with switch
// 5. Criar uma calculadora simples com switch
//
// Syntax:
// Sintaxe:
// switch (variable) {
// switch (variavel) {
//     case value1: ... break;
//     case valor1: ... break;
//     case value2: ... break;
//     case valor2: ... break;
//     default: ...
//     default: ...
// }
// }
// ============================================================================

#include <iostream>
#include <locale>

// Main function entry point 
// Função principal ponto de entrada
int main() {

    // Set locale to Brazilian Portuguese UTF-8 
    // Define locale para português brasileiro UTF-8
    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    int choice;

    std::cout << "Menu:\n";
    std::cout << "1. Option 1\n";
    std::cout << "2. Option 2\n";
    std::cout << "3. Option 3\n";

    // Output prompt for choice 
    // Imprime prompt para escolha
    std::cout << "Enter your choice (1-3): ";

    // Read integer input for choice 
    // Lê entrada inteira para escolha
    std::cin >> choice;
    
    // Start switch statement based on choice 
    // Inicia declaração switch baseada na escolha
    switch (choice) {

        // Case for choice 1 
        // Caso para escolha 1
        case 1:
            std::cout << "You selected Option 1." << std::endl;
            break;

        // Case for choice 2 
        // Caso para escolha 2
        case 2:
            std::cout << "You selected Option 2." << std::endl;
            break;

        // Case for choice 3 
        // Caso para escolha 3
        case 3:
            std::cout << "You selected Option 3." << std::endl;
            break;

        // Default case for invalid choice 
        // Caso padrão para escolha inválida
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }
    return 0;
}

