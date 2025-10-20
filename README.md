#  C Assignment — Functions and Header Files

## 📘 Overview

This project demonstrates modular programming in C using custom functions and header files. It is divided into two main objectives:

- **Objective 1**: Implement number property functions (Armstrong, Adams, Prime Palindrome) using `mylib.h` and `mylib.c`.
- **Objective 2**: Create reusable 1D array utilities using `arraylib.h` and `arraylib.c`.

The project is designed to reinforce your understanding of:
- Function declarations and definitions
- Header guards and modular file structure
- Menu-driven programming
- Array manipulation techniques

---

## 📁 File Structure

| File Name       | Purpose                                                                 |
|----------------|-------------------------------------------------------------------------|
| `main.c`        | Menu-driven program to test number functions and array utilities        |
| `mylib.h`       | Header file declaring number property functions                         |
| `mylib.c`       | Source file implementing Armstrong, Adams, Prime Palindrome logic       |
| `arraylib.h`    | Header file declaring array utility functions                           |
| `arraylib.c`    | Source file implementing array operations (sort, reverse, search, etc.) |
| `README.md`     | Documentation for compilation, usage, and project overview              |

---

##  How to Compile

Use GCC to compile all source files together:

```bash
gcc main.c mylib.c arraylib.c -o main