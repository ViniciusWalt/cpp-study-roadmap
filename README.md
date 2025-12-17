# 🚀 Laboratório de Prática em C++# 🚀 C++ Practice Laboratory# 🚀 C++ Practice Laboratory



> **Repositório organizado para praticar todos os fundamentos de C++ do zero ao avançado**



[![Linguagem: C++](https://img.shields.io/badge/Linguagem-C%2B%2B-blue.svg)](https://isocpp.org/)> **Organized repository to practice all C++ fundamentals from zero to advanced**> **Organized repository to practice all C++ fundamentals from zero to advanced**

[![Padrão: C++20](https://img.shields.io/badge/Padrão-C%2B%2B20-green.svg)](https://en.cppreference.com/w/cpp/20)



---

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)

## 📚 Sumário

[![Standard: C++20](https://img.shields.io/badge/Standard-C%2B%2B20-green.svg)](https://en.cppreference.com/w/cpp/20)[![Standard: C++20](https://img.shields.io/badge/Standard-C%2B%2B20-green.svg)](https://en.cppreference.com/w/cpp/20)

1. [Sobre](#-sobre)

2. [Estrutura do Projeto](#-estrutura-do-projeto)

3. [Roteiro de Estudo](#-roteiro-de-estudo)

4. [Como Compilar](#-como-compilar)------

5. [Configuração UTF-8](#️-importante-utf-8-no-windows)

6. [Comandos Úteis](#-comandos-úteis)

7. [Recursos Adicionais](#-recursos-adicionais)

## 📚 Table of Contents## 📚 Table of Contents

---



## 📖 Sobre

1. [About](#-about)1. [About](#-about)

Este repositório contém **53+ exercícios** organizados por tópico para praticar C++ de forma estruturada. Cada arquivo `.cpp` vem com:

2. [Project Structure](#-project-structure)2. [Project Structure](#-project-structure)

- ✅ Comentários descritivos explicando o objetivo (bilingues: inglês/português)

- ✅ Lista de tarefas para implementar3. [Study Roadmap](#-study-roadmap)3. [Study Roadmap](#-study-roadmap)

- ✅ Dicas e exemplos de sintaxe

- ✅ Espaço em branco para você **codificar manualmente**4. [How to Compile](#-how-to-compile)4. [How to Compile](#-how-to-compile)

- ✅ Configuração de locale para suporte a acentos (UTF-8)

5. [UTF-8 Configuration](#️-important-utf-8-on-windows)5. [UTF-8 Configuration](#️-important-utf-8-on-windows)

**Filosofia:** Aprenda fazendo! Não há código pronto, você deve implementar tudo.

6. [Useful Commands](#-useful-commands)6. [Useful Commands](#-useful-commands)

**Nota:** Verifique o `README-01-FUNDAMENTALS.md` em `01-Fundamentals/` para informações detalhadas sobre fundamentos, história, aplicações e futuro de C++. Também veja `Guia-Linguagens-Hardware.md` para guias sobre outras linguagens para interação com hardware.

7. [Additional Resources](#-additional-resources)

---

---

## 📂 Estrutura do Projeto

---

```

C++/## 📖 About

│

├── 01-Fundamentals/             # 7 exercícios básicos (atualizados com comentários bilingues e locale)## 📖 About

│   ├── 01-hello-world.cpp

│   ├── 02-variables-COMPLETE.cpp (exemplo pronto)This repository contains **53+ exercises** organized by topic to practice C++ in a structured way. Each `.cpp` file comes with:

│   ├── 03-constants.cpp

│   ├── 04-operators.cppThis repository contains **53+ exercises** organized by topic to practice C++ in a structured way. Each `.cpp` file comes with:

│   ├── 05-input-output.cpp

│   ├── 06-type-conversion.cpp- ✅ Descriptive comments explaining the objective

│   ├── 07-variables.cpp

│   └── README-01-FUNDAMENTALS.md (guia detalhado)- ✅ Descriptive comments explaining the objective (bilingual: English/Portuguese)- ✅ Task list to implement

│

├── 02-Control-Flow/             # 7 exercícios de controle- ✅ Task list to implement- ✅ Hints and syntax examples

│   ├── 01-if-else.cpp

│   ├── 02-switch-case.cpp- ✅ Hints and syntax examples- ✅ Blank space for you to **code manually**

│   ├── 03-ternary-operator.cpp

│   ├── 04-loop-for.cpp- ✅ Blank space for you to **code manually**

│   ├── 05-loop-while.cpp

│   ├── 06-loop-do-while.cpp- ✅ Locale configuration for UTF-8 support (accent handling)**Philosophy:** Learn by doing! There's no ready-made code, you must implement everything.

│   └── 07-break-continue.cpp

│

├── 03-Functions/                # 6 exercícios de funções

│   ├── 01-function-declaration.cpp**Philosophy:** Learn by doing! There's no ready-made code, you must implement everything. Recent updates include bilingual annotations for better accessibility and locale setup for international characters.---

│   ├── 02-parameters.cpp

│   ├── 03-pass-by-reference.cpp

│   ├── 04-function-overloading.cpp

│   ├── 05-recursion.cpp**Note:** Check the `README-01-FUNDAMENTALS.md` in `01-Fundamentals/` for detailed info on fundamentals, history, applications, and future of C++. Also, see `Guia-Linguagens-Hardware.md` for guides on other languages for hardware interaction.## 📂 Project Structure

│   └── 06-lambda.cpp

│

├── 04-Arrays-Strings/           # 6 exercícios de arrays

│   ├── 01-one-dimensional-arrays.cpp---```

│   ├── 02-multidimensional-arrays.cpp

│   ├── 03-c-style-strings.cppHackerRank/

│   ├── 04-std-string.cpp

│   ├── 05-string-manipulation.cpp## 📂 Project Structure│

│   └── 06-vector.cpp

│├── 01-Fundamentals/             # 6 basic exercises

├── 05-Pointers-References/      # 5 exercícios de ponteiros

│   ├── 01-pointer-introduction.cpp```│   ├── 01-hello-world.cpp

│   ├── 02-pointers-and-arrays.cpp

│   ├── 03-references.cppC++/│   ├── 02-variables.cpp

│   ├── 04-dynamic-allocation.cpp

│   └── 05-smart-pointers.cpp││   ├── 02-variables-COMPLETE.cpp (ready example)

│

├── 06-OOP-Classes/              # 8 exercícios de OOP├── 01-Fundamentals/             # 7 basic exercises (updated with bilingual comments and locale)│   ├── 03-constants.cpp

│   ├── 01-creating-classes.cpp

│   ├── 02-constructors-destructors.cpp│   ├── 01-hello-world.cpp│   ├── 04-operators.cpp

│   ├── 03-encapsulation.cpp

│   ├── 04-inheritance.cpp│   ├── 02-variables-COMPLETE.cpp (ready example)│   ├── 05-input-output.cpp

│   ├── 05-polymorphism.cpp

│   ├── 06-operator-overloading.cpp│   ├── 03-constants.cpp│   └── 06-type-conversion.cpp

│   ├── 07-static-members.cpp

│   └── 08-templates.cpp│   ├── 04-operators.cpp│

│

├── 07-STL/                      # 7 exercícios de STL│   ├── 05-input-output.cpp├── 02-Control-Flow/             # 7 control exercises

│   ├── 01-vector.cpp

│   ├── 02-list.cpp│   ├── 06-type-conversion.cpp│   ├── 01-if-else.cpp

│   ├── 03-map.cpp

│   ├── 04-set.cpp│   ├── 07-variables.cpp│   ├── 02-switch-case.cpp

│   ├── 05-stack-queue.cpp

│   ├── 06-iterators.cpp│   └── README-01-FUNDAMENTALS.md (detailed guide)│   ├── 03-ternary-operator.cpp

│   └── 07-algorithms.cpp

│││   ├── 04-loop-for.cpp

├── 08-Advanced/                 # 8 exercícios avançados

│   ├── 01-exceptions.cpp├── 02-Control-Flow/             # 7 control exercises│   ├── 05-loop-while.cpp

│   ├── 02-files.cpp

│   ├── 03-namespaces.cpp│   ├── 01-if-else.cpp│   ├── 06-loop-do-while.cpp

│   ├── 04-preprocessor.cpp

│   ├── 05-multiple-files.cpp│   ├── 02-switch-case.cpp│   └── 07-break-continue.cpp

│   ├── 06-move-semantics.cpp

│   ├── 07-threads.cpp│   ├── 03-ternary-operator.cpp│

│   └── 08-regex.cpp

││   ├── 04-loop-for.cpp├── 03-Functions/                # 6 function exercises

├── 09-Projects/                 # Exercícios de projetos

│   └── FizzBuzz.cpp│   ├── 05-loop-while.cpp│   ├── 01-function-declaration.cpp

│

├── Guia-Linguagens-Hardware.md  # Guia de linguagens rápidas para hardware│   ├── 06-loop-do-while.cpp│   ├── 02-parameters.cpp

├── README-ORIGINAL.md           # README original do projeto

├── QUICK-START-ORIGINAL.md      # Guia de início rápido original│   └── 07-break-continue.cpp│   ├── 03-pass-by-reference.cpp

└── README.md                    # Este arquivo

```││   ├── 04-function-overloading.cpp



---├── 03-Functions/                # 6 function exercises│   ├── 05-recursion.cpp



## 🛤️ Roteiro de Estudo│   ├── 01-function-declaration.cpp│   └── 06-lambda.cpp



1. **Comece com 01-Fundamentals**: Domine o básico (variáveis, operadores, E/S).│   ├── 02-parameters.cpp│

2. **02-Control-Flow**: Aprenda condicionais e loops.

3. **03-Functions**: Entenda modularidade.│   ├── 03-pass-by-reference.cpp├── 04-Arrays-Strings/           # 6 array exercises

4. **04-Arrays-Strings**: Manipule coleções de dados.

5. **05-Pointers-References**: Gerenciamento de memória.│   ├── 04-function-overloading.cpp│   ├── 01-one-dimensional-arrays.cpp

6. **06-OOP-Classes**: Programação orientada a objetos.

7. **07-STL**: Biblioteca padrão de containers/algoritmos.│   ├── 05-recursion.cpp│   ├── 02-multidimensional-arrays.cpp

8. **08-Advanced**: Exceções, arquivos, threads, etc.

9. **09-Projects**: Aplique conhecimento em mini-projetos.│   └── 06-lambda.cpp│   ├── 03-c-style-strings.cpp



**Dica:** Compile e execute cada arquivo após implementar. Use os comentários bilingues como guia.││   ├── 04-std-string.cpp



---├── 04-Arrays-Strings/           # 6 array exercises│   ├── 05-string-manipulation.cpp



## 🛠️ Como Compilar│   ├── 01-one-dimensional-arrays.cpp│   └── 06-vector.cpp



### Pré-requisitos│   ├── 02-multidimensional-arrays.cpp│

- **Compilador**: GCC (MinGW no Windows), Clang ou MSVC.

- **IDE**: VS Code, CLion ou Code::Blocks (opcional).│   ├── 03-c-style-strings.cpp├── 05-Pointers-References/      # 5 pointer exercises



### Comandos de Compilação│   ├── 04-std-string.cpp│   ├── 01-pointer-introduction.cpp

```bash

# Arquivo único│   ├── 05-string-manipulation.cpp│   ├── 02-pointers-and-arrays.cpp

g++ arquivo.cpp -o arquivo.exe

│   └── 06-vector.cpp│   ├── 03-references.cpp

# Todos os arquivos em uma pasta (PowerShell no Windows)

foreach ($file in Get-ChildItem *.cpp) { g++ $file.Name -o ($file.BaseName + ".exe") }││   ├── 04-dynamic-allocation.cpp



# Executar├── 05-Pointers-References/      # 5 pointer exercises│   └── 05-smart-pointers.cpp

./arquivo.exe

```│   ├── 01-pointer-introduction.cpp│



**Nota:** Os arquivos incluem `std::setlocale(LC_ALL, "pt_BR.UTF-8");` para suporte a acentos. Garanta que seu terminal suporte UTF-8.│   ├── 02-pointers-and-arrays.cpp├── 06-OOP-Classes/              # 8 OOP exercises



---│   ├── 03-references.cpp│   ├── 01-creating-classes.cpp



## 🌐 Importante: UTF-8 no Windows│   ├── 04-dynamic-allocation.cpp│   ├── 02-constructors-destructors.cpp



Para exibição correta de acentos no PowerShell:│   └── 05-smart-pointers.cpp│   ├── 03-encapsulation.cpp

1. Defina o console para UTF-8: `chcp 65001`

2. Use fontes que suportem Unicode (ex.: Cascadia Code).││   ├── 04-inheritance.cpp



---├── 06-OOP-Classes/              # 8 OOP exercises│   ├── 05-polymorphism.cpp



## 💻 Comandos Úteis│   ├── 01-creating-classes.cpp│   ├── 06-operator-overloading.cpp



```bash│   ├── 02-constructors-destructors.cpp│   ├── 07-static-members.cpp

# Listar arquivos

ls  # Linux/Mac│   ├── 03-encapsulation.cpp│   └── 08-templates.cpp

dir  # Windows

│   ├── 04-inheritance.cpp│

# Compilar com avisos

g++ -Wall -Wextra arquivo.cpp -o arquivo.exe│   ├── 05-polymorphism.cpp├── 07-STL/                      # 7 STL exercises



# Depurar com GDB│   ├── 06-operator-overloading.cpp│   ├── 01-vector.cpp

gdb ./arquivo.exe

│   ├── 07-static-members.cpp│   ├── 02-list.cpp

# Verificar versão do C++

g++ --version│   └── 08-templates.cpp│   ├── 03-map.cpp

```

││   ├── 04-set.cpp

---

├── 07-STL/                      # 7 STL exercises│   ├── 05-stack-queue.cpp

## 📚 Recursos Adicionais

│   ├── 01-vector.cpp│   ├── 06-iterators.cpp

- **Site Oficial do C++**: [isocpp.org](https://isocpp.org/)

- **Referência**: [cppreference.com](https://en.cppreference.com/)│   ├── 02-list.cpp│   └── 07-algorithms.cpp

- **Aprendizado**: [learncpp.com](https://www.learncpp.com/)

- **Comunidades**: Reddit (r/cpp), Stack Overflow│   ├── 03-map.cpp│

- **Livros**: "The C++ Programming Language" de Bjarne Stroustrup

- **Cursos**: Coursera, Udemy│   ├── 04-set.cpp├── 08-Advanced/                 # 8 advanced exercises



Para mais sobre linguagens e hardware, veja `Guia-Linguagens-Hardware.md`. Boa codificação! 🚀│   ├── 05-stack-queue.cpp│   ├── 01-exceptions.cpp

│   ├── 06-iterators.cpp│   ├── 02-files.cpp

│   └── 07-algorithms.cpp│   ├── 03-namespaces.cpp

││   ├── 04-preprocessor.cpp

├── 08-Advanced/                 # 8 advanced exercises│   ├── 05-multiple-files.cpp

│   ├── 01-exceptions.cpp│   ├── 06-move-semantics.cpp

│   ├── 02-files.cpp│   ├── 07-threads.cpp

│   ├── 03-namespaces.cpp│   └── 08-regex.cpp

│   ├── 04-preprocessor.cpp│

│   ├── 05-multiple-files.cpp├── 09-Projects/                 # Practical projects

│   ├── 06-move-semantics.cpp│   └── FizzBuzz.cpp

│   ├── 07-threads.cpp│

│   └── 08-regex.cpp└── docs/                        # Documentation

│```

├── 09-Projects/                 # Project exercises

│   └── FizzBuzz.cpp**Total: 53 exercises + complete documentation**

│

├── Guia-Linguagens-Hardware.md  # Guide to fast languages for hardware---

├── README-ORIGINAL.md           # Original project README

├── QUICK-START-ORIGINAL.md      # Original quick start guide## 🎯 Study Roadmap

└── README.md                    # This file

```Follow this order for best learning:



---### **Level 1: Beginner** (2-3 weeks)

- ✅ **01-Fundamentals** - Language foundation

## 🛤️ Study Roadmap- ✅ **02-Control-Flow** - Decisions and loops

- ✅ **03-Functions** - Code organization

1. **Start with 01-Fundamentals**: Master basics (variables, operators, I/O).

2. **02-Control-Flow**: Learn conditionals and loops.### **Level 2: Intermediate** (3-4 weeks)

3. **03-Functions**: Understand modularity.- ✅ **04-Arrays-Strings** - Basic data structures

4. **04-Arrays-Strings**: Handle data collections.- ✅ **05-Pointers-References** - Memory management

5. **05-Pointers-References**: Memory management.- ✅ **06-OOP-Classes** - Object-Oriented Programming

6. **06-OOP-Classes**: Object-oriented programming.

7. **07-STL**: Standard library containers/algorithms.### **Level 3: Advanced** (4-6 weeks)

8. **08-Advanced**: Exceptions, files, threads, etc.- ✅ **07-STL** - Standard Library (essential!)

9. **09-Projects**: Apply knowledge in mini-projects.- ✅ **08-Advanced** - Modern C++11/20 topics



**Tip:** Compile and run each file after implementing. Use the bilingual comments for guidance.### **Level 4: Projects** (ongoing)

- ✅ **09-Projects** - Practical applications

---

---

## 🛠️ How to Compile

## 🛠️ How to Compile

### Prerequisites

- **Compiler**: GCC (MinGW on Windows), Clang, or MSVC.### **Simple Method (single file)**

- **IDE**: VS Code, CLion, or Code::Blocks (optional).

```powershell

### Compilation Commands# Compile and run with UTF-8

```bashchcp 65001 ; g++ file.cpp -o file.exe -fexec-charset=UTF-8 ; .\file.exe

# Single file

g++ file.cpp -o file.exe# Or compile separately

g++ file.cpp -o program.exe -fexec-charset=UTF-8

# All files in a folder (Windows PowerShell).\program.exe

foreach ($file in Get-ChildItem *.cpp) { g++ $file.Name -o ($file.BaseName + ".exe") }```



# Run### **Recommended Flags**

./file.exe

``````powershell

# Complete with warnings and C++20

**Note:** Files include `std::setlocale(LC_ALL, "pt_BR.UTF-8");` for accent support. Ensure your terminal supports UTF-8.g++ file.cpp -o program.exe -std=c++20 -Wall -Wextra -fexec-charset=UTF-8

```

---

**Explanation:**

## 🌐 Important: UTF-8 on Windows- `-std=c++20` → Use C++20 standard

- `-Wall -Wextra` → Enable all warnings (good for learning)

For proper accent display in PowerShell:- `-fexec-charset=UTF-8` → UTF-8 support

1. Set console to UTF-8: `chcp 65001`

2. Use fonts that support Unicode (e.g., Cascadia Code).---



---## ⚠️ IMPORTANT: UTF-8 on Windows



## 💻 Useful Commands### 🧠 **The Problem**



```bashWhen running programs with **special characters** (á, ç, í, ã, ê), they may appear incorrectly:

# List files

ls  # Linux/Mac```

dir  # Windows❌ "José" → "JosÃ©"

❌ "naïve" → "naÃ¯ve"

# Compile with warnings```

g++ -Wall -Wextra file.cpp -o file.exe

### ✅ **Complete Solution (Recommended)**

# Debug with GDB

gdb ./file.exeALWAYS use this command:



# Check C++ version```powershell

g++ --versionchcp 65001 ; g++ file.cpp -o file.exe -fexec-charset=UTF-8 ; .\file.exe

``````



---**What each part does:**

- `chcp 65001` → Configure terminal for UTF-8

## 📚 Additional Resources- `-fexec-charset=UTF-8` → Tell compiler to use UTF-8

- The `;` separate commands

- **Official C++ Site**: [isocpp.org](https://isocpp.org/)

- **Reference**: [cppreference.com](https://en.cppreference.com/)### 📚 **Complete Documentation**

- **Learning**: [learncpp.com](https://www.learncpp.com/)

- **Communities**: Reddit (r/cpp), Stack OverflowFor more details, see [`docs/EMPRESAS.md`](docs/EMPRESAS.md)

- **Books**: "The C++ Programming Language" by Bjarne Stroustrup

- **Courses**: Coursera, Udemy---



For more on languages and hardware, see `Guia-Linguagens-Hardware.md`. Happy coding! 🚀## 📝 Useful Commands

### **Compilation**

```powershell
# Basic with UTF-8
chcp 65001 ; g++ file.cpp -o program.exe -fexec-charset=UTF-8

# With C++20 and warnings
g++ file.cpp -o program.exe -std=c++20 -Wall -Wextra -fexec-charset=UTF-8

# Optimized for performance
g++ file.cpp -o program.exe -O3 -std=c++20
```

### **Cleanup**

```powershell
# Remove all executables
Remove-Item -Recurse -Force *.exe

# Remove object files
Remove-Item -Recurse -Force *.o, *.obj
```

---

## 📚 Additional Resources

### **Official Documentation**
- [cppreference.com](https://en.cppreference.com/) - Complete C++ reference
- [cplusplus.com](http://www.cplusplus.com/) - Tutorials and reference
- [ISO C++ Standards](https://isocpp.org/) - Official standards

### **Recommended Books**
- **"C++ Primer"** (Stanley Lippman) - For beginners
- **"Effective Modern C++"** (Scott Meyers) - C++11/14
- **"The C++ Programming Language"** (Bjarne Stroustrup) - Complete reference

### **Online Practice**
- [HackerRank C++](https://www.hackerrank.com/domains/cpp)
- [LeetCode](https://leetcode.com/)
- [Codeforces](https://codeforces.com/)
- [Exercism C++](https://exercism.org/tracks/cpp)

---

## 🎓 Study Tips

### **For Beginners**
1. ✅ Don't skip exercises - do them in order
2. ✅ Type code manually (don't copy/paste)
3. ✅ Experiment - modify and break the code
4. ✅ Compile frequently to see errors
5. ✅ Read error messages carefully

### **Best Practices**
1. ✅ Use descriptive variable names
2. ✅ Comment complex code
3. ✅ Compile with `-Wall -Wextra` to see warnings
4. ✅ Format code consistently
5. ✅ Test with different inputs

---

## 🎯 Next Steps

1. ✅ Start with `01-Fundamentals/01-hello-world.cpp`
2. ✅ Configure terminal with `chcp 65001`
3. ✅ Compile with `-fexec-charset=UTF-8`
4. ✅ Have fun learning C++!

---

**Happy studying! 🚀💻**

> *"The code you write today is the experience you'll have tomorrow."*
