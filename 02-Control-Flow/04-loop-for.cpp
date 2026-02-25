// ============================================================================
// Exercise: FOR LOOP
// Exercício: Loop FOR
// ============================================================================
// Objective: Practice loops with for
// Objetivo: Praticar loops com for
// 
// Tasks:
// Tarefas:
// 1. Create a for that counts from 1 to 10
// 1. Criar um for que conta de 1 a 10

#include <iostream>

int main() {
    // 1. For that counts from 1 to 10
    // 1. For que conta de 1 a 10
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }

    // 2. For that counts backwards from 10 to 1
    // 2. For que conta regressivamente de 10 a 1
    for (int i = 10; i >= 1; i--) {
        std::cout << i << std::endl;
    }

    // 3. For with different increment (i += 2)
    // 3. For com incremento diferente (i += 2)
    for (int i = 1; i <= 10; i += 2) {
        std::cout << i << std::endl;
    }

    // 4. Nested loops (for inside for)
    // 4. Loops aninhados (for dentro de for)
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            std::cout << "i=" << i << ", j=" << j << std::endl;
        }
    }

    // 5. Multiplication tables using for
    // 5. Tabuada usando for
    for (int i = 1; i <= 10; i++) {
        std::cout << "Tabuada do " << i << ":" << std::endl;
        for (int j = 1; j <= 10; j++) {
            std::cout << i << " x " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}

// ============================================================================

