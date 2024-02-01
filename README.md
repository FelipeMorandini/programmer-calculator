# Programmer Calculator

## Overview
This Programmer Calculator is a command-line application written in C. It provides basic arithmetic functions, bitwise operations, and number system conversions (binary, decimal, and hexadecimal). The project is structured with modularity in mind, with separate directories for source files, header files, and build artifacts.

## Features
- Basic arithmetic operations (addition, subtraction, multiplication, division)
- Bitwise operations (AND, OR, XOR, NOT)
- Number system conversions (binary to decimal, decimal to binary, decimal to hexadecimal, hexadecimal to decimal)

## Getting Started

### Prerequisites
- GCC Compiler
- Make (for building the project)

### Directory Structure
- `src/`: Contains the source files `.c`
- `include/`: Contains the header files `.h`
- `build/`: Contains the compiled binaries and object files

### Compiling the Program
To compile the project, navigate to the project root directory and run:

```bash
make
```

This command will generate the executable in the build/ directory.

### Running the Program

After compiling, run the program using:

```bash
./build/programmer_calculator
```

Follow the on-screen prompts to perform various calculations.

### Cleaning Build Files

To clean up the build files, use:

```bash
make clean
```

## Contributing

Contributions to this project are welcome. Please ensure to follow the existing code structure and comment your code where necessary.

## License

This project is open-source and available under the MIT License.