# C++ Study Roadmap

Minimal, bilingual-friendly exercises from basics to advanced. Each `.cpp` has a short task list in the header—open, read, and implement.

## Structure
- `01-Fundamentals/` – hello world, variables, operators, I/O, type conversion.
- `02-Control-Flow/` – if/else, switch, loops, ternary.
- `03-Functions/` – declaration, parameters, references, overload, recursion, lambdas.
- `04-Arrays-Strings/` – 1D/2D arrays, C-strings, `std::string`, `std::vector`.
- `05-Pointers-References/` – pointers, arrays, references, dynamic allocation, smart pointers.
- `06-OOP-Classes/` – classes, ctors/dtors, encapsulation, inheritance, polymorphism, operators, static, templates.
- `07-STL/` – vector, list, map, set, stack/queue, iterators, algorithms.
- `08-Advanced/` – exceptions, files, namespaces, preprocessor, multi-file, move semantics, threads, regex.
- `09-Projects/` – small projects (e.g., FizzBuzz).
- Extras: `README-01-FUNDAMENTALS.md`, `Guia-Linguagens-Hardware.md`.

## Compile & run
- Single file: `g++ file.cpp -o file.exe`
- Run (PowerShell): `./file.exe`
- All files in a folder (PowerShell): `foreach ($f in Get-ChildItem *.cpp) { g++ $f.Name -o ($f.BaseName + ".exe") }`

## UTF-8
- Files call `std::setlocale(LC_ALL, "pt_BR.UTF-8");`
- Set console to UTF-8 (PowerShell): `chcp 65001`

## Notes
- Exercises are for practice; no finished solutions. Comments/tasks are bilingual (EN/PT-BR).
- Feel free to trim comments as you advance.