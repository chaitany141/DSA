class Solution {
public:
vector<string> ans;

    void solve(int idx, string& temp, string& s, unordered_map<char, string>& mp){
        int n = s.size();

        if(idx >= s.size()){
            ans.push_back(temp);
            return;
        }

        char ch = s[idx];
        string str = mp[ch];

        for(int i = 0; i<str.size(); i++){

            temp += str[i];

            solve(idx + 1, temp, s, mp);

            temp.pop_back();
            
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};

        unordered_map<char, string> mp;

        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
 
        string temp = "";

        solve(0, temp, digits, mp);

        return ans;        
    }
};
