class Solution {
public:
    int m, n;

    int drow[2] = {0, 1};
    int dcol[2] = {1, 0};

    vector<vector<vector<int>>> dp;

    bool solve(int i, int j, int open, vector<vector<char>>& grid) {

        if (open < 0)
            return false;

        int remaining = (m - 1 - i) + (n - 1 - j);

        if (open > remaining)
            return false;

        if (i == m - 1 && j == n - 1)
            return open == 0;

        if (dp[i][j][open] != -1)
            return dp[i][j][open];

        for (int k = 0; k < 2; k++) {

            int row = i + drow[k];
            int col = j + dcol[k];

            if (row >= m || col >= n)
                continue;

            int newOpen = open;

            if (grid[row][col] == '(')
                newOpen++;
            else
                newOpen--;

            if (solve(row, col, newOpen, grid))
                return dp[i][j][open] = true;
        }

        return dp[i][j][open] = false;
    }

    bool hasValidPath(vector<vector<char>>& grid) {

        m = grid.size();
        n = grid[0].size();

        if ((m + n - 1) % 2 != 0)
            return false;

        if (grid[0][0] != '(')
            return false;

        if (grid[m - 1][n - 1] != ')')
            return false;

        dp.assign(
            m,
            vector<vector<int>>(
                n,
                vector<int>(m + n + 1, -1)
            )
        );

        return solve(0, 0, 1, grid);
    }
};