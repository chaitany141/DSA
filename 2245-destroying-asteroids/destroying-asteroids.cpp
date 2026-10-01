class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        long long sum = mass;
        for(int i = 0; i<n; i++){
            if(sum < arr[i]) return false;
            sum += arr[i];

        }

        return 1;
    }
};