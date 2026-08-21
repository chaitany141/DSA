class Solution {
public:

int nonObstacles;

    int solve(vector<vector<int>>& grid, int cnt, int i, int j){
        int m = grid.size();
        int n = grid[0].size();

        if(i < 0 || j < 0 || i > m - 1 || j >= n || grid[i][j] == -1) return 0;

        int result = 0;

        if(grid[i][j] == 2)
        {
            if(cnt == nonObstacles){
                return 1;
            }
            return 0;
        }

        grid[i][j] = -1;

        int dCol[] = {0, 1, 0, -1};
        int dRow[] = {1, 0, -1, 0};

        for(int k = 0; k<4; k++){
            int row = i + dRow[k];
            int col = j + dCol[k];

            result += solve(grid, cnt + 1, row, col);
        }
        grid[i][j] = 0;

        return result;
    }


    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        nonObstacles = 0;
        

        int start_x = 0, start_y = 0;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 0){
                    nonObstacles++;
                }
                if(grid[i][j] == 1){
                    start_x = i;
                    start_y = j;
                }
            }
        }
        nonObstacles++;

        int cnt = 0;

        return solve(grid, cnt, start_x, start_y);
    }
};