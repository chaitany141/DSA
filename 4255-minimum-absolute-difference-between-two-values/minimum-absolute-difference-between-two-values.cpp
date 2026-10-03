class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(nums[i] == 1 && nums[j] == 2){
                    int diff = abs(i - j);
                    ans = min(ans, diff);
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};