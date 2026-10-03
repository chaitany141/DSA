class Solution {
public:
    int t[201][201];
    bool vis[201][201];

    int solve(int i, int j, vector<vector<int>>& arr) {

        if(i == arr.size() - 1)
            return arr[i][j];

        if(vis[i][j])
            return t[i][j];

        vis[i][j] = true;

        t[i][j] = arr[i][j] +
            min(solve(i + 1, j, arr),
                solve(i + 1, j + 1, arr));

        return t[i][j];
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        memset(vis, false, sizeof(vis));
        return solve(0, 0, triangle);
    }
};