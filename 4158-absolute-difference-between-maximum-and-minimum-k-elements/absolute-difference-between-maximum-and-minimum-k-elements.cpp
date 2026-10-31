class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0, j = n - 1;
        int sum1 = 0, sum2 = 0;

        while(k--){
            sum1 += nums[i];
            sum2 += nums[j];
            i++;
            j--;
        }
        return abs(sum1 - sum2);
    }
};