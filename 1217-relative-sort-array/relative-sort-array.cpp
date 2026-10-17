class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;

        for (int x : arr1) {
            mp[x]++;
        }

        vector<int> ans;

        for (int x : arr2) {
            while (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        vector<int> remaining;

        for (int x : arr1) {
            if (mp[x] > 0) {
                remaining.push_back(x);
                mp[x]--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for (int x : remaining) {
            ans.push_back(x);
        }

        return ans;
    }
};
