class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            if(arr[i] <= 0 || arr[i] > n) {
                arr[i] = n + 1;
            }
        }

        for(int i = 0; i < n; i++) {
            int num = abs(arr[i]);

            if(num <= n) {
                int idx = num - 1;
                arr[idx] = -abs(arr[idx]);
            }
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) {
                return i + 1;
            }
        }

        return n + 1;
    }
};