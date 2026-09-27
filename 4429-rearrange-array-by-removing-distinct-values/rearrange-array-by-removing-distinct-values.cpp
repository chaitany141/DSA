class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> vis(n, -1);

        sort(nums.begin(), nums.end());

        int i = 0;
        while(nums.size() > 0){
            int i = 0;

            while(i < nums.size() - 1){
                if(nums[i] != nums[i + 1]){
                    ans.push_back(nums[i]);
                    nums.erase(nums.begin() + i);
                }
                else i++;
                
            }
            ans.push_back(nums[nums.size() - 1]);
            nums.erase(nums.begin() + nums.size() - 1);
        }

        return ans;
    }
};