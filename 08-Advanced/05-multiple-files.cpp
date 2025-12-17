// ============================================================================
// Exercício: Múltiplos Arquivos (Header e Source)
// ============================================================================
// Objetivo: Separar declaração e implementação
// 
// Tarefas:
// 1. Criar arquivo .h (header) com declarações
// 2. Criar arquivo .cpp com implementações
// 3. Usar #include para incluir o header
// 4. Usar include guards (#ifndef, #define, #endif)
// 5. Compilar múltiplos arquivos juntos
//
// pessoa.h:
// #ifndef PESSOA_H
// #define PESSOA_H
// class Pessoa { ... };
// #endif
//
// pessoa.cpp:
// #include "pessoa.h"
// // implementações
//
// Compilar: g++ main.cpp pessoa.cpp -o programa
// ============================================================================

