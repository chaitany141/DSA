class Solution {
public:
    int dp[21][5001];

    int solve(vector<int>& rods, int i, int diff) {
        if(i == rods.size())
            return diff == 0 ? 0 : -1000000;

        if(dp[i][diff] != -1)
            return dp[i][diff];

        int x = rods[i];

        // Skip
        int skip = solve(rods, i + 1, diff);

        // Put x on taller side
        int taller = solve(rods, i + 1, diff + x);

        // Put x on shorter side
        int shorter = min(diff, x) +
                      solve(rods, i + 1, abs(diff - x));

        return dp[i][diff] = max({
            skip,
            taller,
            shorter
        });
    }

    int tallestBillboard(vector<int>& rods) {
        memset(dp, -1, sizeof(dp));
        return solve(rods, 0, 0);
    }
};