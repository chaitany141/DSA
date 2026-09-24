class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        int n = arr.size();

        int ans = INT_MAX; 

        vector<int> pre(n, 0);
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            pre[i] = sum;
        }

        vector<int> post(n, 0);
        int sum2 = 0;
        for(int i = n - 1; i >= 0; i--){
            sum2 += arr[i];
            post[i] = sum2;
        }

        for(int i = 0; i<n; i++){
            if(pre[i] == x){
                ans = min(ans, i + 1);
            }
            if(post[i] == x){
                ans = min(ans, n - i);
            }
        }

        for (int i = 0; i < n; i++) {
            int target = x - pre[i];
            if (target < 0) continue;
            int lo = 0, hi = n - 1, found = -1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (post[mid] == target) {
                    found = mid;
                    break;
                } else if (post[mid] > target) {
                    lo = mid + 1; 
                } else {
                    hi = mid - 1; 
                }
            }

            if (found != -1) { 
                if (i < found) {
                    ans = min(ans, (i + 1) + (n - found));
                }
            }
        }

        if(ans == INT_MAX) return -1;
        return ans;


    }
};