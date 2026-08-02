class Solution {
public:

    void dfs(vector<vector<int>>& grid, vector<int>& vis, int node){
        vis[node] = 1;
        int n = grid.size();

        for(int i=0; i<n; i++){
            if(grid[node][i] == 1 && !vis[i]){
                dfs(grid, vis, i);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> vis(n, 0);
        int ans = 0;

        for(int i=0; i<n; i++){
            if(!vis[i]){
                ans++;
                dfs(grid, vis, i);
            }
        }
        return ans;
    }
};