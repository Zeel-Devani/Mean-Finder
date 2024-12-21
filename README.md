# Mean Calculator

This project calculates the Arithmetic Mean and Geometric Mean for a given set of positive numbers. The program is written in C and includes a `Makefile` to build the project. A bash script (`mean.sh`) is also included to automate testing using multiple input files.

## Features

- Computes **Arithmetic Mean**: The sum of the numbers divided by the count of the numbers.
- Computes **Geometric Mean**: The nth root of the product of the numbers, where n is the total count of numbers.
- Automates testing using a bash script to process multiple input files.

## Getting Started

### Prerequisites

Before running the project, make sure you have the following installed:
- **gcc**: The GNU C Compiler.
- **make**: The build automation tool.
- **bash**: A shell for running the testing script.

### Installation

1. Clone the repository:
   ```
   git clone https://github.com/Zeel-Devani/Mean-Calculator.git
   cd Mean-Calculator
   ```

2. Compile the program:
   ```
   make
   ```

3. Run the program manually or use the provided bash script for testing.

### Running Tests

The `mean.sh` script automates the testing process by running the program for each input file (`test-*.txt`) in the current directory.

1. Prepare your test files:
   - Create text files with the format `test-N.txt`, where `N` is a number.
   - Each file should contain a list of positive numbers. The first number indicates how many subsequent numbers are in the list.

2. Run the tests:
   ```
   ./mean.sh
   ```

3. The script will generate output files like `test-N`, where `N` corresponds to the test case, containing the calculated means.

### Example

Given an input file `test-1.txt`:

```
3
2.0
4.0
8.0
```

The program will output:

```
4.666667
3.632833
```

### Cleaning Up

To remove the compiled files and start fresh, run:

```
make clean
```

This will remove the executable (`mean`) and object files (`mean.o`).


Thank you. 
