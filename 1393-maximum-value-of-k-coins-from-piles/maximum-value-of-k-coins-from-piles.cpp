class Solution {
public:
int t[1001][2001];

    int solve(int i, vector<vector<int>>& arr, int k){
        int n = arr.size();
        if(i >= n) return 0;

        if(t[i][k] != -1){
            return t[i][k];
        }

        int not_taken = solve(i + 1, arr, k);

        int taken = 0;
        int sum = 0;

        int m = arr[i].size();

        for(int j = 0; j< min((int)k, m); j++){
            sum += arr[i][j];

            taken = max(taken , sum + solve(i + 1, arr, k - (j + 1)));
        }

        return t[i][k] = max(taken, not_taken);
        
    }

    int maxValueOfCoins(vector<vector<int>>& arr, int k) {
        
        memset(t, -1, sizeof(t));

        return solve(0, arr, k);
    }
};