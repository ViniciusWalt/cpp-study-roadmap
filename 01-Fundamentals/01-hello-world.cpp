// ============================================================================
// Exercise: Hello World
// Exercício: Olá Mundo
// ============================================================================
// Objective: Create your first C++ program
// Objetivo: Criar seu primeiro programa em C++
// ============================================================================
// Tasks:
// Tarefas:
// 1. Include the <iostream> library
// 1. Incluir a biblioteca <iostream>

// 2. Create the main() function
// 2. Criar a função main()

// 3. Use std::cout to print "Hello, World!"
// 3. Usar std::cout para imprimir "Olá, Mundo!"

// 4. Return 0
// 4. Retornar 0
//
// Hint: std::cout << "text" << std::endl;
// Dica: std::cout << "texto" << std::endl;
// ============================================================================

#include <iostream>
#include <locale>
int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    // Print Hello World
    // Imprimir Olá Mundo
    std::cout << "Hello, World!" << std::endl;
    return 0;   
}