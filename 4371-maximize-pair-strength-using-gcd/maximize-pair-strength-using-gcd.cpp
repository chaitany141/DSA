class Solution {
public:
    long long maxPairStrength(vector<int>& arr) {
        int n = arr.size();

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                long long g = gcd(arr[i], arr[j]);

                long long nume = 1LL * arr[i] * arr[j];
                long long deno = g * g;

                long long temp = nume / deno;

                ans = max(ans, temp);
            }
        }

        return ans;
    }
};