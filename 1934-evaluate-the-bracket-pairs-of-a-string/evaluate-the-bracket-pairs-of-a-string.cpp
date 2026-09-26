class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for(int i = 0; i<knowledge.size(); i++){
            string s1 = knowledge[i][0];
            string s2 = knowledge[i][1];

            mp[s1] = s2;
        }

        string ans = "";

        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                string temp = "";
                i++;
                while(s[i] != ')'){
                    temp += s[i];
                    i++;
                }
                if(mp.find(temp) != mp.end()){
                    ans += mp[temp];
                }
                else{
                    ans += '?';
                }
            }
            
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};