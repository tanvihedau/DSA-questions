class Solution {
public:
    vector<vector<int>> nQueen(int n) {
        if (n < 4 && n != 1) return {};
        vector<vector<int>> res;
        vector<int> row(n);

        auto solve = [&](auto&& self, int c, int cols, int d1, int d2) -> void {
            if (c == n) { res.push_back(row); return; }
            for (int r = 0, pos = 1; r < n; ++r, pos <<= 1)
                if (!(cols & pos || d1 & (pos << c) || d2 & (pos << (n - 1 - c))))
                    row[c] = r + 1, self(self, c + 1, cols | pos, d1 | (pos << c), d2 | (pos << (n - 1 - c)));
        };

        solve(solve, 0, 0, 0, 0);
        return res;
    }
};
