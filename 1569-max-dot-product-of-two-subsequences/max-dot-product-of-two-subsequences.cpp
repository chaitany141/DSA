class Solution {
public:

    int t[501][501];

    int solve(int i, int j, vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();

        if(i == m || j == n)
            return -1e9;

        if(t[i][j] != INT_MIN)
            return t[i][j];

        int take = arr1[i] * arr2[j];

        if(i + 1 < m && j + 1 < n) {
            take = max(take,
                       arr1[i] * arr2[j] +
                       solve(i + 1, j + 1, arr1, arr2));
        }

        int not_take1 = solve(i, j + 1, arr1, arr2);
        int not_take2 = solve(i + 1, j, arr1, arr2);

        return t[i][j] = max({take, not_take1, not_take2});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        for(int i = 0; i < 501; i++)
            for(int j = 0; j < 501; j++)
                t[i][j] = INT_MIN;

        return solve(0, 0, nums1, nums2);
    }
};