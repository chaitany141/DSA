class Solution {
public:
    int t[101][101];
    int suffix[101];

    int solve(vector<int>& piles, int i, int M) {

        int n = piles.size();

        if (i >= n)
            return 0;

        if (t[i][M] != -1)
            return t[i][M];

        int total = 0;
        int result = 0;

        for (int x = 1; x <= min(2 * M, n - i); x++) {

            total += piles[i + x - 1];

            int next = solve(
                piles,
                i + x,
                max(M, x)
            );

            int alice = total + suffix[i + x] - next;

            result = max(result, alice);
        }

        return t[i][M] = result;
    }

    int stoneGameII(vector<int>& piles) {

        int n = piles.size();

        memset(t, -1, sizeof(t));

        suffix[n] = 0;

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = piles[i] + suffix[i + 1];
        }

        return solve(piles, 0, 1);
    }
};