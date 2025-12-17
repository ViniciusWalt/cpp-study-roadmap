// ============================================================================
// Exercise: Constants
// Exercício: Constantes
// ============================================================================
// Objective: Understand the use of constants
// Objetivo: Entender o uso de constantes
// 
// Tasks:
// Tarefas:
// 1. Declare constants using 'const' and 'constexpr'
// 1. Declarar constantes usando 'const' e 'constexpr'

// 2. Create constants for PI, speed of light, etc.
// 2. Criar constantes para PI, velocidade da luz, etc.

// 3. Try to modify a constant (observe the error)
// 3. Tentar modificar uma constante (observar o erro)

// 4. Use constants in calculations
// 4. Usar constantes em cálculos
//
// Syntax:
// Sintaxe:
// - const type NAME = value;
// - const tipo NOME = valor;

// - constexpr type NAME = value;
// - constexpr tipo NOME = valor;
// ============================================================================

#include <iostream>
#include <locale>
int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    // 1. Declare constants using 'const' and 'constexpr'
    // 1. Declarar constantes usando 'const' e 'constexpr'
    const double PI = 3.14159;
    constexpr double SPEED_OF_LIGHT = 299792458; // in meters per second

    // 2. Use constants in calculations
    // 2. Usar constantes em cálculos
    double radius = 5.0;
    double circumference = 2 * PI * radius;
    std::cout << "Circumference of circle with radius " << radius << " is " << circumference << std::endl;
    std::cout << "Speed of light is " << SPEED_OF_LIGHT << " m/s" << std::endl;

    // 3. Try to modify a constant (uncommenting the next lines will cause a compilation error)
    // 3. Tentar modificar uma constante (descomentando as próximas linhas causará erro de compilação)
    // PI = 3.14; // Error: assignment of read-only variable 'PI'
    // PI = 3.14; // Erro: atribuição de variável somente leitura 'PI'
    // SPEED_OF_LIGHT = 300000000; // Error: assignment of read-only variable 'SPEED_OF_LIGHT'
    // SPEED_OF_LIGHT = 300000000; // Erro: atribuição de variável somente leitura 'SPEED_OF_LIGHT'
    
    return 0;
}
