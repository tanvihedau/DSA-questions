bool isSafe(int row, int col, vector<vector<int>> &board, int val) {
    for (int i = 0; i < board.size(); i++) {
        // Row check
        if (board[row][i] == val)
            return false;

        // Column check
        if (board[i][col] == val)
            return false;

        // 3x3 matrix check
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>> &board) {
    int n = board.size();
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            // If the cell is empty
            if (board[row][col] == 0) {
                for (int val = 1; val <= 9; val++) {
                    if (isSafe(row, col, board, val)) {
                        board[row][col] = val;

                        // Recursive call
                        if (solve(board))
                            return true;

                        // Backtrack
                        board[row][col] = 0;
                    }
                }
                return false; // If no value fits, return false
            }
        }
    }
    return true; // All cells filled correctly
}

void solveSudoku(vector<vector<int>> &mat) {
    solve(mat);
}
