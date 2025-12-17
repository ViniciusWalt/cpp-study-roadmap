// ============================================================================
// Exercise: Variables and Data Types
// Exercício: Variáveis e Tipos de Dados
// ============================================================================
// Objective: Practice declaring and using variables
// Objetivo: Praticar a declaração e uso de variáveis
// ============================================================================
// ============================================================================
// Basic types:
// Tipos básicos:
// - int (integer numbers)
// - int (números inteiros)

// - double (decimal numbers)
// - double (números decimais)

// - char (single character)
// - char (caractere único)

// - bool (true/false)
// - bool (verdadeiro/falso)

// - std::string (text)
// - std::string (texto)
// ============================================================================

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    // 1. Declare variables of different types: int, double, char, bool, string
    // 1. Declarar variáveis de diferentes tipos: int, double, char, bool, string
    int age = 25;
    double height = 1.75;
    char initial = 'A';
    bool student = true;
    std::string name = "Alice";

    // 2. Print the values to screen
    // 2. Imprimir os valores na tela
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " m" << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Student: " << (student ? "Yes" : "No") << std::endl;

    // 3. Modify the values and print again
    // 3. Modificar os valores e imprimir novamente
    age = 30;
    height = 1.82;
    initial = 'B';
    student = false;
    name = "Bruno";

    std::cout << "\nAfter modifications:" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " m" << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Student: " << (student ? "Yes" : "No") << std::endl;

    return 0;
}
