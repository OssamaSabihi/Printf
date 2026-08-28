ustom `_printf` Library

A lightweight, modular implementation of the C standard library `printf` function (`man 3 printf`), built from scratch in pure C.

This project implements a custom format parser, variadic argument handling (`va_list`), dynamic dispatch tables using function pointers, and direct system calls (`write`) to handle formatted output to `stdout`.

---

## Features

- Custom format specifier parsing using a dynamic lookup dispatch table.
- Direct system calls (`write`) to output formatted data.
- Handles string edge cases (e.g., `NULL` string pointers) and invalid specifiers safely.
- Zero external `printf` library dependencies.

---

## Supported Specifiers

| Specifier | Description | Example Input | Example Output |
| :---: | :--- | :--- | :--- |
| `%c` | Single character | `_printf("%c", 'A')` | `A` |
| `%s` | Null-terminated string | `_printf("%s", "Hello")` | `Hello` |
| `%%` | Literal percent sign | `_printf("100%%")` | `100%` |
| `%d` | Signed base-10 integer | `_printf("%d", -1337)` | `-1337` |
| `%i` | Signed integer (base 10) | `_printf("%i", 42)` | `42` |
| `%u` | Unsigned base-10 integer | `_printf("%u", 100)` | `100` |
| `%x` | Unsigned hexadecimal (lowercase) | `_printf("%x", 255)` | `ff` |
| `%X` | Unsigned hexadecimal (uppercase) | `_printf("%X", 255)` | `FF` |
| `%p` | Memory address (pointer) | `_printf("%p", ptr)` | `0x7ffeefbff608` |

---

## Compilation & Usage

### 1. Requirements
- `gcc` or `clang` compiler
- Standard C library headers (`<stdarg.h>`, `<unistd.h>`, `<stdlib.h>`)

