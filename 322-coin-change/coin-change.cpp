class Solution {
public:
int t[13][10001];

    int solve(int i, vector<int>& arr, int x){
        int n = arr.size();

        if(x == 0)
            return 0;

        if(i >= n || x < 0)
            return INT_MAX;
        
        if(t[i][x] != -1) return t[i][x];

        int take = solve(i, arr, x - arr[i]);

        if(take != INT_MAX) take += 1;

        int not_take = solve(i + 1, arr, x);

        return t[i][x] = min(take, not_take);
        
    }

    int coinChange(vector<int>& arr, int x) {

        memset(t, -1, sizeof(t));

        int ans = solve(0, arr, x);

        if(ans == INT_MAX)
            return -1;
            
        return ans;
    }
};