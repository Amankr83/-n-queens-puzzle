# N-Queens Solver (C++)

This is a C++ implementation of the classic **N-Queens Puzzle** using backtracking.

## 🧠 Problem
Place `n` queens on an `n x n` chessboard so that no two queens threaten each other.

## ✅ Features
- Solves the N-Queens puzzle for any `1 <= n <= 9`
- Efficient backtracking implementation
- Clear and modular code using classes

## 📁 Files
- `NQueensSolver.h`: Header file for the solver class
- `NQueensSolver.cpp`: Implementation of the algorithm
- `main.cpp`: Example usage of the solver

## ▶️ How to Compile & Run

Using `g++`:
```bash
g++ main.cpp NQueensSolver.cpp -o NQueensSolver
./NQueensSolver
```

## 📌 Sample Output for n = 4
```
.Q..
...Q
Q...
..Q.

..Q.
Q...
...Q
.Q..
```
