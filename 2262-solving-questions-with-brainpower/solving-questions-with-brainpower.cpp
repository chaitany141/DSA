class Solution {
public:

long long t[100001];

    long long solve(vector<vector<int>>& mat, int i){
        int n = mat.size();
        if(i >= n) return 0;

        if(t[i] != -1) return t[i];

        long long take = mat[i][0] + solve(mat, i + 1 + mat[i][1]);

        long long skip = solve(mat, i + 1);

        return t[i] = max(take, skip);
    }

    long long mostPoints(vector<vector<int>>& mat) {
        int n = mat.size();

        memset(t, -1, sizeof(t));

        return solve(mat, 0);
    }
};