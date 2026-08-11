class Solution {
public:
int t[2501][2501];
int n;
    int solve(vector<int>& arr, int i, int prev){
        if(i >= n) return 0;

        if(t[i][prev + 1] != -1){
            return t[i][1 + prev];
        } 

        int take = 0;
        if(prev == -1 || arr[i] > arr[prev]){
            take = 1 + solve(arr, i + 1, i);
        } 
        int not_take = solve(arr, i + 1, prev); 

        return t[i][prev + 1] = max(take, not_take);
    }

    int lengthOfLIS(vector<int>& nums) {
        memset(t, -1, sizeof(t));
        n = nums.size();

        return solve(nums, 0, -1);
    }
};