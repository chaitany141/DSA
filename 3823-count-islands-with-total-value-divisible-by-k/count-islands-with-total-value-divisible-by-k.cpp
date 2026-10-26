class Solution {
public:

    long long dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j){
        
        int m = grid.size();
        int n = grid[0].size();

        vis[i][j] = 1;

        long long sum = grid[i][j];

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};

        for (int k = 0; k < 4; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];

            if (ni >= 0 && ni < m &&
                nj >= 0 && nj < n &&
                !vis[ni][nj] &&
                grid[ni][nj] != 0) {

                sum += dfs(grid, vis, ni, nj);
            }
        }

        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;

        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(vis[i][j] == 0 && grid[i][j] != 0){
                    long long sum = dfs(grid, vis, i, j);

                    if(sum % k == 0) ans++;
                }
            }
        }
        return ans;
    }
};