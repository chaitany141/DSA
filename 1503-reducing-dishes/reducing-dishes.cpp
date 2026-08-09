class Solution {
public:

int t[501][501];

    int solve(vector<int>& arr, int i, int time){
        int n = arr.size();
        if(i >= n) return 0;

        if(t[i][time] != -1) return t[i][time];

        int take = arr[i]*time + solve(arr, i + 1, time + 1);

        int not_take = solve(arr, i + 1, time);

        return t[i][time] = max(take, not_take);

        
    }


    int maxSatisfaction(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        memset(t, -1, sizeof(t));

        return solve(arr, 0, 1);
    }
};