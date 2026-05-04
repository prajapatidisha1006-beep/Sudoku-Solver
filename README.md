# Sudoku-Solver in C++
A Sudoku Solver built using C++ that solves a 9 x 9 Sudoku puzzle using the Backtracking Algorithm.

Features:
- Solves any valid 9 x 9 Sudoku puzzle
- Supports multiple solutions
- Uses recursion & backtracking
- Validates user input (only values 0-9 allowed)
- Displays all possible solutions with count

Concepts Used:
- Backtracking Algorithm
- Recursion
- 2D Arrays
- Input Validation
- Constraint Checking (Row, Column, 3 x 3 Grid)

How to run:
- g++ main.cpp -o sudoku
- ./sudoku

Input Format
- Enter a 9 x 9 Sudoku grid
- Use 0 for empty cells

How it Works:
1. The program scans the grid for an empty cell(0)
2. It tries number from 1-9
3. It checks if the number is valid using:
- Row Constraint
- Column Constraint
- 3 x 3 subgrid constraint
4. If valid -> move forward recursively
5. If not -> backtrack and try another number

Future Improvements:
- Add formatted board display (like real Sudoku)
- Add option to find only one solution
- Build a GUI or web version

  
