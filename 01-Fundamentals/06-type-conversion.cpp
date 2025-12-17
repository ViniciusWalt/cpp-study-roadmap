// ============================================================================
// Exercise: Type Conversion (Type Casting)
// Exercício: Conversão de Tipo (Type Casting)
// ============================================================================
// Objective: Understand implicit and explicit conversion
// Objetivo: Entender conversão implícita e explícita
// 
// Tasks:
// Tarefas:
// 1. Convert int to double
// 1. Converter int para double

// 2. Convert double to int (loss of precision)
// 2. Converter double para int (perda de precisão)

// 3. Use static_cast<type>(value)
// 3. Usar static_cast<tipo>(valor)

// 4. Convert string to int using std::stoi()
// 4. Converter string para int usando std::stoi()

// 5. Convert int to string using std::to_string()
// 5. Converter int para string usando std::to_string()
//
// Be careful with data loss when converting types!
// Cuidado com perda de dados ao converter tipos!
// ============================================================================

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "pt_BR.UTF-8");
    
    // 1. Convert int to double
    // 1. Converter int para double
    int inValue = 10;

    // Implicit conversion
    // Conversão implícita
    double doubleValue = inValue;
    std::cout << "Implicit conversion int to double: " << doubleValue << std::endl;
    
    // Explicit conversion using static_cast
    // Conversão explícita usando static_cast
    double explicitDoubleValue = static_cast<double>(inValue);
    std::cout << "Explicit conversion int to double: " << explicitDoubleValue << std::endl;

    // 2. Convert double to int (loss of precision)
    // 2. Converter double para int (perda de precisão)
    double decValue = 9.99;

    // truncates decimal part
    // trunca a parte decimal
    int valueFromDouble = static_cast<int>(decValue);
    std::cout << "Conversion double to int (loss of precision): " << valueFromDouble << std::endl;

    // 4. Convert string to int using std::stoi()
    // 4. Converter string para int usando std::stoi()
    std::string strNumber = "42";
    int numberFromString = std::stoi(strNumber);
    std::cout << "String to int conversion: " << numberFromString << std::endl;

    // 5. Convert int to string using std::to_string()
    // 5. Converter int para string usando std::to_string()
    int anotherInt = 100;
    std::string strFromInt = std::to_string(anotherInt);
    std::cout << "Int to string conversion: " << strFromInt << std::endl;
    
    return 0;

}