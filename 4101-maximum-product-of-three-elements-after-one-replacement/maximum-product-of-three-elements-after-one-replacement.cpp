class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max1;
        int max2;
        if(abs(nums[0]) > abs(nums[1])){
            max1 =abs(nums[0]) ;
            max2 = abs(nums[1]);
        }
        else{
            max1 = abs(nums[1]);
            max2 = abs(nums[0]) ;            
        }
        for(int i = 2; i < n; i++){
            if(abs(nums[i]) >= max1){
                max2 = max1;
                max1 = abs(nums[i]);
            }
            else if(abs(nums[i]) > max2){
                max2 = abs(nums[i]);
            }
        }
        return 1LL * max1 * max2 * 1e5;

    }
};