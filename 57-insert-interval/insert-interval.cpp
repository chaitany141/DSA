class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& arr2) {

        vector<vector<int>> ans;

        int i = 0;
        int n = arr.size();

        while(i < n && arr[i][1] < arr2[0]) {
            ans.push_back(arr[i]);
            i++;
        }

        while(i < n && arr[i][0] <= arr2[1]) {
            arr2[0] = min(arr2[0], arr[i][0]);
            arr2[1] = max(arr2[1], arr[i][1]);
            i++;
        }

        ans.push_back(arr2);

        while(i < n) {
            ans.push_back(arr[i]);
            i++;
        }

        return ans;
    }
};