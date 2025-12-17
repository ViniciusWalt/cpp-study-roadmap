// ============================================================================
// Exercício: Move Semantics (C++11)
// ============================================================================
// Objetivo: Entender rvalue references e std::move
// 
// Tarefas:
// 1. Entender lvalue vs rvalue
// 2. Usar && (rvalue reference)
// 3. Implementar construtor de movimento
// 4. Implementar operador de atribuição por movimento
// 5. Usar std::move para transferir propriedade
// 6. Entender quando o compilador usa move automaticamente
//
// Move semantics evita cópias desnecessárias e melhora performance!
// 
// class MinhaClasse {
// public:
//     MinhaClasse(MinhaClasse&& outro) noexcept { ... }
//     MinhaClasse& operator=(MinhaClasse&& outro) noexcept { ... }
// };
// ============================================================================

