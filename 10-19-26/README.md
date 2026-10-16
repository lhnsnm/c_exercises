# C Language Beginner Exercises & Test Suite

Welcome! This repository contains beginner C programming exercises covering standard input/output (`printf`, `scanf`), data types, conditional statements (`if-else`, `switch`), and `for` loops. An automated integration test suite powered by **CMake** and **CTest** is included.

---

## 🌐 Quick Start: Run in Browser

You can edit and test code directly inside your web browser using **GitHub Codespaces**:

1. Click the green **`< > Code`** button on GitHub.
2. Select **Codespaces** -> **Create codespace on main**.
3. Press `Ctrl + ~` (or `Cmd + ~` on Mac) to open the terminal.

---

## 📁 Project Structure

```text
.
├── src/
│   ├── mini_calculator/         # Exercise 1: Calculator
│   │   └── main.c
│   ├── multiplier_for_loop/     # Exercise 2: Multiplication Table
│   │   └── main.c
│   └── vending_machine/         # Exercise 3: Vending Machine
│       └── main.c
├── tests/                       # Test cases (inputs & expected outputs)
│   ├── mini_calculator/
│   ├── multiplier_for_loop/
│   └── vending_machine/
├── CMakeLists.txt
├── README.md
└── build/
```

---

## 🛠️ How to Build and Run the Exercises

You can use the project `Makefile` for the common tasks.

### Build the project

```bash
make build
```

### Run each exercise interactively

```bash
make run-calc
make run-multiplier
make run-vending
```

### Run the full test suite

```bash
make test
```

### Rebuild and test in one step

```bash
make build && make test
```

### Clean the generated build files

```bash
make clean
```

---

## 🧪 Alternative Manual Commands

If you prefer not to use `make`, you can also run:

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

---

## ✅ Notes

This project is designed to give beginners a simple C exercise flow:

- input/output basics
- arithmetic operations
- conditionals
- loops
- automated validation using CTest
