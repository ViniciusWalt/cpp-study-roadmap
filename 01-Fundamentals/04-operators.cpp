// ============================================================================
// Exercise: Operators
// Exercício: Operadores
// ============================================================================
// Objective: Practice arithmetic, relational, and logical operators
// Objetivo: Praticar operadores aritméticos, relacionais e lógicos
// 
// Tasks:
// Tarefas:
// 1. Arithmetic operators: +, -, *, /, % (modulo)
// 1. Operadores aritméticos: +, -, *, /, % (módulo)
// 2. Relational operators: ==, !=, <, >, <=, >=
// 2. Operadores relacionais: ==, !=, <, >, <=, >=
// 3. Logical operators: && (AND), || (OR), ! (NOT)
// 3. Operadores lógicos: && (E), || (OU), ! (NÃO)
// 4. Increment operators: ++, --
// 4. Operadores de incremento: ++, --
// 5. Assignment operators: =, +=, -=, *=, /=
// 5. Operadores de atribuição: =, +=, -=, *=, /=
//
// Example: int result = (a + b) * c;
// Exemplo: int resultado = (a + b) * c;
// ============================================================================

#include <iostream>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    int a = 10;
    int b = 3;
    int c = 5;

    // Arithmetic operations
    // Operações aritméticas
    std::cout << "Arithmetic Operations:" << std::endl;
    std::cout << "a + b = " << (a + b) << std::endl;
    std::cout << "a - b = " << (a - b) << std::endl;
    std::cout << "a * b = " << (a * b) << std::endl;
    std::cout << "a / b = " << (a / b) << std::endl;
    std::cout << "a % b = " << (a % b) << std::endl;
    std::cout << std::endl;

    // Relational operations
    // Operações relacionais
    std::cout << "Relational Operations:" << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << std::endl;

    // Logical operations
    // Operações lógicas
    std::cout << "Logical Operations:" << std::endl;
    std::cout << "(a > b) && (c > b): " << ((a > b) && (c > b)) << std::endl;
    std::cout << "(a < b) || (c > b): " << ((a < b) || (c > b)) << std::endl;
    std::cout << "!(a == b): " << (!(a == b)) << std::endl;
    std::cout << std::endl;

    // Increment operations
    // Operações de incremento
    std::cout << "Increment Operations:" << std::endl;
    std::cout << "a before increment: " << a << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a after increment: " << a << std::endl;
    std::cout << "b before decrement: " << b << std::endl;
    std::cout << "b--: " << b-- << std::endl;
    std::cout << "b after decrement: " << b << std::endl;
    std::cout << std::endl;

    // Assignment operations
    // Operações de atribuição
    std::cout << "Assignment Operations:" << std::endl;
    int d = 20;
    std::cout << "d = " << d << std::endl;
    d += 5;
    std::cout << "d += 5: " << d << std::endl;
    d -= 3;
    std::cout << "d -= 3: " << d << std::endl;
    d *= 2;
    std::cout << "d *= 2: " << d << std::endl;
    d /= 4;
    std::cout << "d /= 4: " << d << std::endl;
    
    return 0;
}