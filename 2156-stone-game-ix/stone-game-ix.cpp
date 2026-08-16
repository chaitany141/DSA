class Solution {
public:
    bool stoneGameIX(vector<int>& arr) {
        int n = arr.size();
        
        if(n == 1 && arr[0] % 3 != 0) return 0;

        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int x : arr){
            int type = x % 3;
            if(type == 0) cnt0++;
            else if(type == 1) cnt1++;
            else cnt2++;
        }

        if(cnt0 % 2 == 0){
            return cnt1 >= 1 && cnt2 >= 1;
        }
        return abs(cnt1 - cnt2) > 2;

    }
};