class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();

        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }

        int temp = n*(n + 1) / 2;

        return temp - sum;
    }
};