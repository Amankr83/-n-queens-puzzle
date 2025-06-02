#include <iostream>
#include "NQueensSolver.h"

int main() {
    NQueensSolver solver;
    int n = 4;
    vector<vector<string>> results = solver.solveNQueens(n);

    cout << "Solutions for " << n << "-Queens:\n";
    for (const auto& solution : results) {
        for (const string& row : solution)
            cout << row << '\n';
        cout << '\n';
    }

    return 0;
}
