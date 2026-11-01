class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                int cnt = 0;
                while(i < n && nums[i] == 0){
                    cnt++;
                    i++;
                }
                arr.push_back(cnt);
            }
        }

        long long ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            int x = arr[i];
            ans += 1LL * x * (x + 1) / 2;
        }
        return ans;

    }
};