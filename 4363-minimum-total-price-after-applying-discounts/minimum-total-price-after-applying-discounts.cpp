class Solution {
public:
    double minPrice(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n= arr2.size();

        sort(arr1.begin(), arr1.end(), greater<int>());
        sort(arr2.begin(), arr2.end(), greater<int>());

        int i = 0;
        double ans = 0;

        while(i < m && i < n){
            ans += (arr1[i] * (100 - arr2[i]) ) / 100.0;

            i++;

        }

        while(i < m){
            ans += arr1[i];
            i++;
        }

        return ans;

    }
};