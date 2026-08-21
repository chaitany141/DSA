class Solution {
public:

    void backTrack(int idx, vector<int>& curr, vector<vector<int>> &result, vector<int>& arr ){
        int n = arr.size();
        
        if(curr.size() >= 2) result.push_back(curr);

        unordered_set<int> st;
        
        for(int i = idx; i<n; i++){
            if((curr.empty() || arr[i] >= curr.back()) && (st.find(arr[i]) == st.end() )){
                
                curr.push_back(arr[i]);
                backTrack(i + 1, curr, result, arr);
                curr.pop_back();
                st.insert(arr[i]);

            }
        }

        
    }

    vector<vector<int>> findSubsequences(vector<int>& arr) {
        int n = arr.size();

        vector<vector<int>> result;

        vector<int> curr;

        backTrack(0, curr, result, arr);

        return result;
    }
};