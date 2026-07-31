class Solution {
public:
    int minMoves2(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        int median = arr[n / 2];

        for(int i=0; i<n; i++){
            ans += abs(arr[i] - median);
        }
        return ans;
    }
};