class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;

        unordered_map<char, int> mp;
        for(char c = 'a'; c <= 'z'; c++) {
            mp[c] = 'z' - c + 1;
        }

        for(int i = 0; i<n; i++){
            int idx = mp[s[i]];
            ans += (i + 1) * idx;
        }
        
        return ans;
    }
};