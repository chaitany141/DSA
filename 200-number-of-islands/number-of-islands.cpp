class Solution {
public:

    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis){
        int m = grid.size();
        int n = grid[0].size();

        vis[i][j] = 1;

        int dRow[] = {1, 0, -1, 0};
        int dCol[] = {0, 1, 0, -1};

        for(int k = 0; k<4; k++){
            int row = i + dRow[k];
            int col = j + dCol[k];

            if(row >= 0 && row < m && col >= 0 && col < n && grid[row][col] == '1' && !vis[row][col] ){
                vis[row][col] = 1;
                dfs(row, col, grid, vis);
            }
        }

    }

    int numIslands(vector<vector<char>>& grid){
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>>vis(m, vector<int>(n, 0));
        int cnt = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(i, j, grid, vis);
                    cnt++;
                }
            }
        }

        return cnt;

    }



};









//     void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j){
//         int drow[] = {1, 0, -1, 0};
//         int dcol[] = {0, 1, 0 , -1};

//         vis[i][j] = 1;
//         int n = grid.size();
//         int m = grid[0].size();

//         for(int k=0; k<4; k++){
//             int nrow = i + drow[k];
//             int ncol = j + dcol[k];

//             if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&!vis[nrow][ncol] && grid[nrow][ncol] == '1') {
                
//                 dfs(grid, vis, nrow, ncol);
//             }
//         }        
//     }


//     int numIslands(vector<vector<char>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int ans = 0;

//         vector<vector<int>> vis(n, vector<int>(m, 0));

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(grid[i][j] == '1' && !vis[i][j]){
//                     ans++;
//                     dfs(grid, vis, i, j);
//                 }
//             }
//         }
//         return ans;
//     }
