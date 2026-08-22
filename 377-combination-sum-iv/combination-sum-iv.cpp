class Solution {
public:
int t[201][1001];

    int solve(int idx, vector<int>& arr, int x){
        int n = arr.size();

        if(x == 0) return 1;
        if(x < 0) return 0;

        if(idx >= n) return 0;

        if(t[idx][x] != -1) return t[idx][x];

        int take_idx = solve(0, arr, x - arr[idx]);

        int not_take = solve(idx + 1, arr, x);

        return t[idx][x] = take_idx + not_take;


    }

    int combinationSum4(vector<int>& arr, int x) {
        
        int n = arr.size();

        memset(t, -1, sizeof(t));
        
        return solve(0, arr, x);
    }
};