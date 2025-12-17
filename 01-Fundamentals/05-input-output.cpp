// ============================================================================
// Exercise: Input and Output
// Exercício: Entrada e Saída
// ============================================================================
// Objective: Practice reading user input
// Objetivo: Praticar a leitura de entrada do usuário
// 
// Tasks:
// Tarefas:
// 1. Use std::cin to read an integer
// 1. Use std::cin para ler um inteiro

// 2. Use std::cin to read a string (single word)
// 2. Use std::cin para ler uma string (palavra única)

// 3. Use std::getline() to read a full line
// 3. Use std::getline() para ler uma linha completa

// 4. Use std::cout to display the read data
// 4. Use std::cout para exibir os dados lidos

// 5. Create an interactive program that asks for name and age
// 5. Crie um programa interativo que pergunte nome e idade
//
// Syntax:
// Sintaxe:

// - std::cin >> variable;
// - std::cin >> variável;

// - std::getline(std::cin, string);
// - std::getline(std::cin, string);
// ============================================================================

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    int age;
    std::string name;
    std::string fullLine;

    // Task 1: Read an integer
    // Tarefa 1: Ler um inteiro
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Limpar o caractere de nova linha do buffer de entrada
    // Clear the newline character from the input buffer
    std::cin.ignore();

    // Task 2: Read a single word string
    // Tarefa 2: Ler uma string de palavra única
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Limpar o caractere de nova linha do buffer de entrada
    // Clear the newline character from the input buffer
    std::cin.ignore();

    // Task 3: Read a full line
    // Tarefa 3: Ler uma linha completa
    std::cout << "Enter a full line about yourself: ";
    std::getline(std::cin, fullLine);

    // Task 4: Display the read data
    // Tarefa 4: Exibir os dados lidos
    std::cout << "\nYou entered:\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Full Line: " << fullLine << "\n";
    
    return 0;
}