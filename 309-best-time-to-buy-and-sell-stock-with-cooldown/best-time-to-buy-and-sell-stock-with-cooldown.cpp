class Solution {
public:

int t[5001][2];

    int solve(vector<int>& arr, int day, bool buy){
        int n = arr.size();
        if(day >= n) return 0;

        int profit = 0;

        if(t[day][buy] != -1){
            return t[day][buy];
        }

        if(buy){
            int take = solve(arr, day + 1, false) - arr[day];

            int not_take = solve(arr, day + 1, true);

            profit = max({profit, take, not_take});
        }
        else{
            int sell = arr[day] + solve(arr, day + 2, true);

            int not_sell = solve(arr, day + 1, false);

            profit = max({sell, not_sell, profit});
        }

        return t[day][buy] = profit;
        
    }

    int maxProfit(vector<int>& arr) {
        int n = arr.size();

        bool buy = 1;
        memset(t, -1, sizeof(t));

        return solve(arr, 0, buy);

    }
};