class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre;
        vector<int> post(n, 0);
        int temp = 0, temo = 0;

        for(int i=0; i<n; i++){
            temp += arr[i];
            pre.push_back(temp);
        }
        for(int i=n - 1; i>=0; i--){
            temo += arr[i];
            post[i] = temo;
        }

        for(int i=0; i<n; i++){
            if(pre[i] == post[i]) return i;

        }

        return -1;

        
    }
};