#ifndef NQUEENSSOLVER_H
#define NQUEENSSOLVER_H

#include <vector>
#include <string>
using namespace std;

class NQueensSolver {
public:
    vector<vector<string>> solveNQueens(int n);

private:
    void backtrack(int row, int n, vector<string>& board, vector<vector<string>>& solutions,
                   vector<bool>& cols, vector<bool>& diag1, vector<bool>& diag2);
};

#endif // NQUEENSSOLVER_H
