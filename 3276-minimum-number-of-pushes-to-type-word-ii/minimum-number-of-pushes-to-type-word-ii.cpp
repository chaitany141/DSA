class Solution {
public:
    int minimumPushes(string s) {
        int x = s.size();
        int ans = 0;

        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        vector<pair<char, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // for (auto x : v)
        //     cout << x.first << " " << x.second << endl;

        int n = v.size();
        if(n < 9) return x;

        else if(n < 17){
            for (int i = 0; i < min(8, (int)v.size()); i++) {
                ans += (v[i].second);
            }
            for (int i = 8; i < min(16, (int)v.size()); i++) {
                ans += 2 * (v[i].second);
            }

        }
        else if(n < 25){
            for (int i = 0; i < min(8, (int)v.size()); i++) {
                ans += (v[i].second);
            }
            for (int i = 8; i < min(16, (int)v.size()); i++) {
                ans += 2 * (v[i].second);
            }
            for (int i = 16; i < min(24, (int)v.size()); i++) {
                ans += 3 * (v[i].second);
            }
        }
        else {
            for (int i = 0; i < min(8, (int)v.size()); i++) {
                ans += (v[i].second);
            }
            for (int i = 8; i < min(16, (int)v.size()); i++) {
                ans += 2 * (v[i].second);
            }
            for (int i = 16; i < min( 24, (int)v.size()); i++) {
                ans += 3 * (v[i].second);
            }
            for (int i = 24; i < min( 26, (int)v.size()); i++) {
                ans += 4 * (v[i].second);
            }
        }
        return ans;
        
    }
};