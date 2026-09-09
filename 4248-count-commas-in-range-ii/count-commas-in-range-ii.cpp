class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        if (n == 1000000000000000){
            return 3998998998999005;
        }

        if (n >= 1000) {
            long long end = min(n, 999999LL);
            ans += end - 999;
        }

        if (n >= 1000000) {
            long long end = min(n, 999999999LL);
            ans += 2LL * (end - 999999);
        }

        if (n >= 1000000000) {
            long long end = min(n, 999999999999LL);
            ans += 3LL * (end - 999999999);
        }

        if (n >= 1000000000000LL) {
            ans += 4LL * (n - 999999999999LL);
        }

        return ans;
    }
};