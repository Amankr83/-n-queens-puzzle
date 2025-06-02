#include <iostream>
#include "NQueensSolver.h"

int main() {
    NQueensSolver solver;
    int n = 4;

    vector<vector<string>> results = solver.solveNQueens(n);

    cout << "Solutions for " << n << "-Queens problem:\n\n";
    for (const auto& solution : results) {
        for (const string& row : solution)
            cout << row << endl;
        cout << endl;
    }

    return 0;
}
