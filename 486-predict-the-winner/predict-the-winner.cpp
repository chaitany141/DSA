class Solution {
public:

    int solve(vector<int>& arr, int low, int high){
        if(low == high) return arr[low];

        int left = arr[low] - solve(arr, low + 1, high);
        int right = arr[high] - solve(arr, low, high - 1);

        return max(left, right);
    }

    bool predictTheWinner(vector<int>& arr) {
        int n = arr.size();

        if(n < 3) return 1;
        if(n % 2 == 0) return 1;

        int low = 0, high = n - 1;

        int ans = solve(arr, low, high);

        if(ans < 0) return 0;
        return 1;
    }
};