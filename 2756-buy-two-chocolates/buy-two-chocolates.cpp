class Solution {
public:
    int buyChoco(vector<int>& arr, int x) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        if(arr[0] + arr[1] <= x){
            x -= arr[0] + arr[1];
        }
        
        return x;
    }
};