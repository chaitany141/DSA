class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> ans(n, 0);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int num = grid[i][j];
                string s = to_string(num);

                int sizE = s.size();

                if(ans[j] < sizE)
                {
                    ans[j] = sizE;
                }
            }
        }
        return ans;
    }
};