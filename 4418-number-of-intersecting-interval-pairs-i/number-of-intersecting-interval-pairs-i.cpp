class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int ans = 0;

        for(int i = 0; i<n - 1; i++){

            for(int j = i + 1; j < n ; j++){
                int x1 = arr[i][0];
                int y1 = arr[i][1];

                int x2 = arr[j][0];
                int y2 = arr[j][1];

                if(y1 >= x2 || y2 <= x1) ans++;
            }
            
        }
        return ans;
    }
};