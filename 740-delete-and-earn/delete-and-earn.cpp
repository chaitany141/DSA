class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
        int n = arr.size();

        int maxi = *max_element(arr.begin(), arr.end());

        vector<int> points(maxi + 1, 0);

        for(int x : arr){
            points[x] += x;
        }

        vector<int> dp(maxi + 1, 0);

        dp[0] = 0;

        if(maxi >= 1) dp[1] = points[1];

        for(int i = 2; i <= maxi; i++) {

            int take = points[i] + dp[i-2];
            int notTake = dp[i-1];

            dp[i] = max(take, notTake);
        }

        return dp[maxi];
        
    }
};