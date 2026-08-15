class Solution {
public:
int t[101][101];

    int solve(vector<vector<int>>& mat, int i, int j){
        int m = mat.size();
        int n = mat[0].size();

        if(i >= m || j >= n) return 0;

        if(mat[i][j] == 1) return 0;

        if (i == m - 1 && j == n - 1) return 1;

        if(t[i][j] != -1) return t[i][j];

        int right = 0, down = 0;

        right = solve(mat, i + 1, j);

        down = solve(mat, i, j + 1);

        return t[i][j] = right + down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(t, -1, sizeof(t));

        return solve(obstacleGrid, 0, 0);
    }
};