class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       
        int n = nums.size();
         vector<int> ans(n, 0);

        vector<int> pre(n, 0);
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            pre[i] = sum;
        }
        vector<int> post(n, 0);
        int sum1 = 0;
        for(int i = n - 1; i >= 0; i--){
            sum1 += nums[i];
            post[i] = sum1;

            ans[i] = abs(post[i] - pre[i]);
        }
        return ans;
    }
};