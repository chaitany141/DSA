class Solution {
public:

double t[101][26][26];

    double solve(int i, int n, int k, int row, int col){
        if (row < 0 || row >= n || col < 0 || col >= n) return 0.0;

        if(i == k) return 1.0;

        if(t[i][row][col] != -1) return t[i][row][col];

        double a = solve(i + 1, n, k, row + 2, col + 1);
        double b = solve(i + 1, n, k, row + 1, col + 2);
        double c = solve(i + 1, n, k, row + 2, col - 1);
        double d = solve(i + 1, n, k, row - 1, col - 2);
        double e = solve(i + 1, n, k, row + 1, col - 2);
        double f = solve(i + 1, n, k, row - 1, col + 2);
        double h = solve(i + 1, n, k, row - 2, col + 1);
        double g = solve(i + 1, n, k, row - 2, col - 1);

        return t[i][row][col] = (a + b + c + d + e + f + g + h) / 8.0;
    }

    double knightProbability(int n, int k, int row, int column) {
        fill(&t[0][0][0],
             &t[0][0][0] + 101 * 26 * 26,
             -1.0);

        return solve(0, n, k, row, column);
    }
};