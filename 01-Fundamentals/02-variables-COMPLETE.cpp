// ============================================================================
// Exercise: Variables
// Exercício: Variáveis
// ============================================================================
// Objective: Practice declaring and using variables
// Objetivo: Praticar a declaração e uso de variáveis
// 
// Tasks:
// Tarefas:
// 1. Declare variables
// 1. Declarar variáveis
// 2. Print values
// 2. Imprimir valores
// 3. Modify and print again
// 3. Modificar e imprimir novamente
// 4. Demonstrate scope
// 4. Demonstrar escopo
// ============================================================================

#include <iostream>
#include <string>
#include <locale>

int main() {
    // Set locale to UTF-8 for proper accent/Unicode handling
    // Definir localidade para UTF-8 para tratamento adequado de acentos/Unicode
    std::setlocale(LC_ALL, ".UTF8");

    // Create a variable to store the user's name and assign a value
    // Criar uma variável para armazenar o nome do usuário e atribuir um valor
    std::string userName = "Vinícius";

    // Print the value of the variable
    // Imprimir o valor da variável
    std::cout << "User Name: " << userName << std::endl;

    // Change the value of the variable
    // Alterar o valor da variável
    userName = "Ana";
    std::cout << "Updated User Name: " << userName << std::endl;

    // Demonstrate variable scope
    // Demonstrar o escopo da variável
    {
        std::string userName = "LocalUser";
        std::cout << "Local User Name: " << userName << std::endl;
    }

    // Print the global variable again to show it hasn't changed
    // Imprimir a variável global novamente para mostrar que não mudou
    std::cout << "Global User Name after local scope: " << userName << std::endl;

    return 0;
}