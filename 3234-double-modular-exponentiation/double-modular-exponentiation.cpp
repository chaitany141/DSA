class Solution {
public:

long long modPow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;

    while (b > 0) {
        if (b & 1)
            res = res * a % m;

        a = a * a % m;
        b >>= 1;
    }

    return res;
}
    vector<int> getGoodIndices(vector<vector<int>>& arr, int target) {
        int n = arr.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int a = arr[i][0];
            int b = arr[i][1];
            int c = arr[i][2];
            int m = arr[i][3];

            if (modPow(modPow(a, b, 10), c, m) == target) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};