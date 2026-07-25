class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string s(n, '.');

        ans.push_back(s);

        for(int i=1; i<m; i++){
            string temp(n - 1, '#');
            temp += '.';

            ans.push_back(temp);
        }
        return ans;
    }
};