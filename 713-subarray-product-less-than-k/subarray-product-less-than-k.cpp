class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int n = arr.size();
        if(k <= 1) return 0;
        int cnt = 0;
        
        int left = 0;
        int i = 0; // i -> right
        int prod = 1;

        for(i=0; i<n; i++){
            prod *= arr[i];

            while(prod >= k){
                prod = prod / arr[left];
                left++;
            }

            cnt += i - left + 1;
        }
        return cnt;
    }
};