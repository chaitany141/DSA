class Solution {
public:

unordered_map<string, bool>mp;

    bool solve(const string &s1, const string &s2){
        if(s1 == s2) return true;

        string key = s1 + "_" + s2;

        if(mp.find(key) != mp.end()){
            return mp[key];
        }

        bool result = false;
        int n = s1.length();

        for(int i = 1; i<n; i++){


            bool swapped = solve(s1.substr(0, i), s2.substr(n - i, i)) && solve(s1.substr(i, n - i), s2.substr(0,n - i)) ;

            if(swapped == true) {
                result = true;
                break;
            }

            bool not_swapped = solve(s1.substr(0, i), s2.substr(0, i)) && solve(s1.substr(i, n - i), s2.substr(i, n - i));

            if(not_swapped == true){
                result= true;
                break;
            }
        }
        return mp[key] = result;
    }

    bool isScramble(string s1, string s2) {
        int n = s1.size();

        mp.clear();

        return solve(s1, s2);
    }
};