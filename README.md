# Solving Turkish Character Issue

In this project, we demonstrate how to solve the issue of Turkish characters not displaying correctly in C++ programs.

## Problem

When writing C++ programs, you may encounter an issue where Turkish characters are not displayed or processed correctly.

## Solution

To solve this problem, you can follow these steps:

1. Include the `locale.h` library:
   
   ```
   #include <locale.h>
   ```

2. Add the following code inside your `main` function:

   ```
   setlocale(LC_ALL, "Turkish");
   ```

By following these steps, you can ensure that Turkish characters are displayed correctly in your C++ programs.

## Usage

1. Open your project files in a C++ development environment.
2. Include the `locale.h` library.
3. Add `setlocale(LC_ALL, "Turkish");` code inside the `main` function.
4. Run your program and observe that Turkish characters are displayed properly.

## Contributions

We welcome all kinds of contributions and suggestions. Please fork the repository, make your changes, and submit a pull request.
