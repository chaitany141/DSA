class Solution {
public:
vector<vector<int>> ans;
unordered_set<int> st;

    void solve( vector<int>& arr, vector<int>& temp){
        int n = arr.size();

        if(temp.size() == n){
            ans.push_back(temp);
            return ;
        }

        for(int i = 0; i<n; i++){
            if(st.find(arr[i]) == st.end()){
                temp.push_back(arr[i]);
                st.insert(arr[i]);
                solve(arr, temp);
                temp.pop_back();
                st.erase(arr[i]);
            }
        }

    }

    vector<vector<int>> permute(vector<int>& arr) {
        vector<int> temp;

        solve(arr, temp);
               
        return ans;
    }
};