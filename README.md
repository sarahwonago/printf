# Printf Project

This project implements a simplified version of the `printf` function in C, handling various conversion specifiers. The project is structured into different tasks, each focusing on specific conversion specifiers and requirements.

## Task 1: Basic Printf Implementation

The main goal of this task is to implement a basic `_printf` function that handles the conversion specifiers `%s`, `%c`, `%%`, `%i`, `%d`, `%r`, `%R`, `%b`, `%u`, `%o`, `%x`, `%X`, `%S`, and `%p`. The implementation follows specified requirements and utilizes a modular approach.

### Files:
- `main.h`: Header file containing function prototypes and structures.
- `_printf.c`: Implementation of the `_printf` function and an array of structures for conversion specifiers.
- Various files containing functions for each conversion specifier (e.g., `print_s.c`, `print_c.c`, etc.).

## Task 2: Handling Integer Conversion Specifiers

This task involves implementing functions to handle the integer conversion specifiers `%d` and `%i`. The implementation follows the specified requirements and maintains modularity.

### Files:
- `print_integer.c`: Implementation of the `print_integer` and `print_integer_dec` functions.

## Task 3: Handling Binary, Octal, Hex, and HEX Conversion Specifiers

This task extends the project to handle additional conversion specifiers: `%b`, `%o`, `%x`, and `%X`. The implementations ensure compliance with the specified requirements.

### Files:
- `print_binary.c`: Implementation of the `print_binary` function.
- `print_octal.c`: Implementation of the `print_octal` function.
- `print_hexadecimal.c`: Implementation of the `print_hexadecimal` and `print_HEX` functions.

## Task 4: Handling Unsigned Integer Conversion Specifier

This task focuses on handling the `%u` conversion specifier. The implementation adheres to the specified requirements and maintains consistency with the overall project structure.

### Files:
- `print_unsigned_int.c`: Implementation of the `print_unsigned_int` function.

## Task 5: Handling Non-Printable Characters in Strings

This task introduces the `%S` conversion specifier, which handles strings with non-printable characters. The implementation follows the specified requirements.

### Files:
- `print_String.c`: Implementation of the `print_String` function.

## Task 6: Handling Pointer Conversion Specifier

This task involves handling the `%p` conversion specifier, used for printing addresses. The implementation follows the specified requirements.

### Files:
- `print_address.c`: Implementation of the `print_address` function.


## Author

Sarah Shaaleh Wonago

