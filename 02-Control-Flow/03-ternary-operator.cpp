// ============================================================================
// Exercise: TERNARY OPERATOR
// Exercício: Operador Ternário
// ============================================================================
// Objective: Use the conditional ternary operator
// Objetivo: Usar o operador condicional ternário
// 
// Tasks:
// Tarefas:
// 1. Understand the syntax: condition ? true_value : false_value
// 1. Entender a sintaxe: condição ? valor_true : valor_false

// 2. Use ternary for conditional assignment
// 2. Usar ternário para atribuição condicional

// 3. Compare with traditional if-else
// 3. Comparar com if-else tradicional

// 4. Create nested ternary expressions (with care!)
// 4. Criar expressões ternárias aninhadas (com cuidado!)
//
// Example: int max = (a > b) ? a : b;
// Exemplo: int max = (a > b) ? a : b;
// ============================================================================

#include <iostream>
#include <locale>

// Understand the syntax: condition ? true_value : false_value
// Entender a sintaxe: condição ? valor_true : valor_false

int main() {

    // Set locale to Brazilian Portuguese UTF-8 
    // Define locale para português brasileiro UTF-8

    std::setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 10;
    int b = 20;
    int c = 15;

    // Use ternary for conditional assignment
    // Usar ternário para atribuição condicional

    int max = (a > b) ? a : b;
    std::cout << "Maximum of a and b: " << max << std::endl;

    // Compare with traditional if-else
    // Comparar com if-else tradicional

    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    std::cout << "Minimum of a and b: " << min << std::endl;

    // Create nested ternary expressions (with care!)
    // Criar expressões ternárias aninhadas (com cuidado!)
    
    int median = (a > b) ? ((a < c) ? a : ((b > c) ? b : c))
                 : ((b < c) ? b : ((a > c) ? a : c));
    std::cout << "Median of a, b, c: " << median << std::endl;

    return 0;
}
