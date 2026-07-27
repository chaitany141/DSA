class Solution {
public:
    int maxProduct(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int largeNum = arr[arr.size() - 1];
        int secNum = arr[arr.size() - 2];

        return (largeNum -1) * (secNum -1);



    }
};