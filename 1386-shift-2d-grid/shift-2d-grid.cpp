class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int t = k % (m * n);

        // flatten the matrix
        vector<int> arr;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                arr.push_back(grid[i][j]);
            }
        }

        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + t);
        reverse(arr.begin() + t, arr.end());

        
        int idx = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = arr[idx++];
            }
        }

        return grid;
    }
};