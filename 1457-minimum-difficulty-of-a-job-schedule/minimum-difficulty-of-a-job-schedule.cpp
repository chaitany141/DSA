class Solution {
public:

int t[301][11];

    int solve(vector<int>& arr, int n, int idx, int d){
        if(d == 1){
            int maxD = arr[idx];

            for(int i = idx; i<n ; i++){
                maxD = max(maxD, arr[i]);

            }
            return maxD;
        }

        if(t[idx][d] != -1){
            return t[idx][d];
        }

        int maxD = arr[idx];
        int finalRes = INT_MAX;

        for(int i = idx; i<=n-d; i++){
            maxD = max(maxD, arr[i]);

            int result = maxD + solve(arr, n, i+1, d-1);;

            finalRes = min(finalRes, result);
        }

        return t[idx][d] = finalRes;


    }

    int minDifficulty(vector<int>& arr, int d) {
        int n = arr.size();

        if(n < d) return -1;

        memset(t, -1, sizeof(t));

        return solve(arr, n, 0, d);
    }
};