class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, i = 0;
        while (i < n && nums[i] < 0){
            cnt++;
            i++;
        }

        if(cnt > n / 2) return cnt;

        int cnt0 = 0;
        while(i < n && nums[i] == 0){
            cnt0++;
            i++;
        }
        int cntPos = n - (cnt + cnt0);
        return max(cntPos, cnt);
    }
};