class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;

        vector<long long> end(26, 0);

        for(char c : s) {
            long long total = 1; // empty subsequence

            for(int x : end) {
                total = (total + x) % MOD;
            }

            end[c - 'a'] = total;
        }

        long long ans = 0;

        for(long long x : end) {
            ans = (ans + x) % MOD;
        }

        return ans;
    }
};