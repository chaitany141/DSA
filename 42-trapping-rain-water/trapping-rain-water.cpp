class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        stack<int> st; 

        vector<int> preMax;
        vector<int> postMax(n, 0);

        int maxi = 0;
        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);
            preMax.push_back(maxi);
        }
        int maxxi = 0;
        for(int i=n - 1; i >= 0; i--){
            maxxi = max(maxxi, arr[i]);
            postMax[i] = maxxi;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans += min(preMax[i], postMax[i]) - arr[i];
        }
        return ans;
    }
};