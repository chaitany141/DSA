class Solution {
public:

int t[501][501];

    int solve(vector<int>& arr1, vector<int>& arr2, int i, int j){
        int m = arr1.size();
        int n = arr2.size();

        if(i >= m || j >= n) return 0;

        if(t[i][j] != -1) return t[i][j];

        int take = 0;
        if(arr1[i] == arr2[j])
            take = 1 + solve(arr1, arr2, i + 1, j + 1);

        int not_take = max(solve(arr1, arr2, i, j +1), solve(arr1, arr2, i + 1, j));

        return t[i][j] = max(take, not_take);
    }

    int maxUncrossedLines(vector<int>& arr1, vector<int>& arr2) {
        memset(t, -1, sizeof(t));
        
        return solve(arr1, arr2, 0, 0);
    }
};