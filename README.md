# How to Program in C

A beginner-friendly C teaching repository for CMSC 421 support sessions and introductory systems programming practice.

This repository is designed for students who are learning to **read, compile, run, trace, and modify C programs**.  
The examples are intentionally small, well-commented, and organized by topic so students can build confidence step by step.

## Goals

By working through this repository, students should learn how to:

- compile and run C programs with `gcc`
- read basic C syntax
- use variables, types, expressions, and formatted I/O
- write conditionals and loops
- define and call functions
- work with arrays and strings
- understand pointers at an introductory level
- use `struct`
- read from and write to files
- build programs with a `Makefile`

## Repository Layout

```text
how_to_program_in_c_repo/
├── Makefile
├── README.md
│   
├── include/
│   └── stats.h
├── ├── 01_basics/
│── ├── 02_control_flow/
│── ├── 03_functions_arrays/
│── ├── 04_strings_pointers/
│── └── 05_structs_files/
├── build/
└── bin/
```

## Prerequisites

You need:

- a C compiler such as `gcc`
- `make`

On Ubuntu/Debian:

```bash
sudo apt update
sudo apt install build-essential
```

## Quick Start

Build all examples:

```bash
make
```

Run one example:

```bash
./bin/hello
./bin/if_else
./bin/array_sum
```

Clean generated files:

```bash
make clean
```

Show available targets:

```bash
make help
```

## Teaching Sequence

Recommended order:

1. `01_basics`
2. `02_control_flow`
3. `03_functions_arrays`
4. `04_strings_pointers`
5. `05_structs_files`

Within each folder, start with the lower-numbered files first.

## Build Philosophy

The repository uses strict warning flags:

```bash
-std=c11 -Wall -Wextra -Wpedantic
```

This helps students learn good habits early.

## Suggested Classroom Use

A useful pattern for each class meeting:

1. Read one example together.
2. Predict the output before compiling.
3. Compile with `make`.
4. Run the program.
5. Change one line and observe what happens.
6. Extend the example with one small feature.

## Core Make Targets

- `make` — build everything
- `make run-hello` — run the hello example
- `make run-if_else` — run the if/else example
- `make run-array_sum` — run the array sum example
- `make clean` — remove built files

## Notes for Students

- Every `.c` file in `src/` is meant to be read.
- Not every example needs user input.
- Start small. Read code line by line.
- Use `printf` generously when debugging.
- Warnings matter. Do not ignore them.

## License / Course Use

This repository is intended for educational use in your course.  
You may freely adapt the examples for lecture, lab, homework scaffolding, and recitation.
