class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int cnt, ans = 0;

        int i = 0;
        while(i < n - 2){
            cnt = 2;
            while(i < n - 2 && nums[i] + nums[i + 1] == nums[i + 2]){
                
                cnt++;
                i++;
            }
            i++;
            ans = max(ans, cnt);
        }
        return ans;
        
    }
};