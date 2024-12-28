# Dangling Pointers and Stack Memory Mismanagement in C++

This repository demonstrates a common error in C++: attempting to free memory allocated on the stack using `free()`.  This incorrect use of `free()` can result in runtime crashes and undefined behavior.

## The Problem
The `bug.cpp` file contains code that allocates an integer variable `x` on the stack, takes its address, and attempts to free the memory using `free()`. This is incorrect because `free()` is intended for dynamically allocated memory (using `malloc`, `calloc`, or `new`). Stack memory is automatically managed, and `free()` should not be used with it. The program may appear to work correctly but it can corrupt the program's stack and lead to unpredictable results.

## The Solution
The `bugSolution.cpp` file provides the correct approach. It avoids using `free()` with stack-allocated memory.  Stack memory is automatically managed upon the function's return.

## How to run the code
1. Clone this repository.
2. Compile the code using a C++ compiler (like g++).
3. Run the compiled executables.
Observe the difference in behavior between the erroneous and corrected versions.
