class Solution {
public:
    int minimumIndex(vector<int>& arr, int x) {
        int n = arr.size();
        int mini = INT_MAX;
        int idx = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] >= x){
                if(arr[i] < mini){
                    mini = arr[i];
                    idx = i;
                }
            }
        }
        if(mini == INT_MAX) return -1;
        
        return idx;
    }
};