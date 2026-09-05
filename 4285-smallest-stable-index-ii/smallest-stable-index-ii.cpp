class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> postMin(n, 0);
        vector<int> preMax(n, 0);

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0; i<n; i++){
            maxi = max(maxi, arr[i]);
            preMax[i] = maxi;
        }
        for(int i = n - 1; i>=0; i--){
            mini = min(mini, arr[i]);
            postMin[i] = mini;
        }
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            int score = preMax[i] - postMin[i];
            if(score <= k){
                return i;
            }
        }
        return -1;
    }
};