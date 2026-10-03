class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = 1;
        int cnt = 0;
        bool isPos = false, isZero = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0) isPos = 1;
        }


        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                ans *= nums[i];
            }
            if(nums[i] < 0) cnt++;
        }
        sort(nums.begin(), nums.end());

        if(cnt % 2 == 0){
            for(int i = 0; i<n; i++){
                if(nums[i] < 0){
                    ans *= nums[i];
                }
            }
        }
        else{
            if(cnt == 1 && nums[0] == -1){

            }
            for(int i = 0; i<cnt - 1; i++){
                ans *= nums[i];
            }
        }

        if(!isPos && cnt <= 1){
            return nums[n - 1];
        }
        return ans;

    }
};