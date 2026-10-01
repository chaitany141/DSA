class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int n = arr.size();
        int mini = arr[0];
        int minIdx = 0;

        for(int i = 1; i<n; i++){
            if(arr[i] < mini){
                mini = arr[i];
                minIdx = i;
            }
        }

        int maxi = arr[0];
        int maxIdx = 0;

        for(int i = 1; i<n; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                maxIdx = i;
            }
        }
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        int removeLeft = right + 1;
        int removeRight = n - left;
        int removeBoth = (left + 1) + (n - right);

        return min({removeLeft, removeRight, removeBoth});
    }
};