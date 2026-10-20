class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        vector<bool> vis(26, false);
        vector<int> lastInd(26, 0);

        for(int i = 0; i < n; i++){
            char ch = s[i];

            lastInd[ch - 'a'] = i;
        }


        string result = "";
        for(int i = 0; i < n; i++){
            
            char ch = s[i];

            int idx = ch - 'a';

            if(vis[idx] == 1){
                continue;
            }

            while(result.size() > 0 && result.back() > ch && lastInd[result.back() - 'a'] > i){
                vis[result.back() - 'a'] = 0;
                result.pop_back();
            }

            result.push_back(ch);
            vis[idx] = 1;
        } 
        return result;
    }
};