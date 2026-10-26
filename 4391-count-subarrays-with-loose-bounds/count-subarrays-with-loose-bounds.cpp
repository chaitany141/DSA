class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        vector<int> temp;

        for(int i = 0; i < n; i++){
            int cnt = 0;
            if(nums[i] <= maxK && nums[i] >= minK){
                while(i < n && nums[i] <= maxK && nums[i] >= minK){
                    cnt++;
                    i++;
                }
            }
            temp.push_back(cnt );
        }

        long long ans = 0;
        for(int i = 0; i < temp.size(); i++){
            long long temo = 1LL*  temp[i] * (temp[i] + 1) / 2;
            ans += temo;
        }
        return ans;
    }
};