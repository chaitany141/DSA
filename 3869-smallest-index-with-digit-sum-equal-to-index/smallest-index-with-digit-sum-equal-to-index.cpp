class Solution {
public:
    int smallestIndex(vector<int>& arr) {
        int n = arr.size();

        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++){
            string temp = to_string(arr[i]);
            int sum = 0;
            int x = temp.size();
            
            for(int j = 0; j < x; j++){
                sum += temp[j] - '0'; 
            }

            if(sum == i){
                ans = min(ans, i);
            }
            
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};