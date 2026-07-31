class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        int n = arr.size();
        int cnt = 1;
        sort(arr.begin(), arr.end());
        
        for(int i=1; i<n; i++){
            if (arr[i][0] <= arr[i - 1][1]) {
                arr[i][1] = min(arr[i][1], arr[i - 1][1]); 
            }
            else cnt++;
        }
        return cnt;
    }
};