class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        map<int, vector<int>> freq;

        for(int &x : arr){
            int cnt = __builtin_popcount(x);
            freq[cnt].push_back(x);
        }

        vector<int> ans;

        for(auto &it : freq){

            sort(it.second.begin(), it.second.end());

            for(int x : it.second){
                ans.push_back(x);
            }
        }

        return ans;
    }
};