class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        for(auto &it : mp){
            if(it.second % k == 0){
                sum += it.second * it.first;
            }
        }
        return sum;
    }
};