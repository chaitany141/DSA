class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();

        unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        vector<pair<char, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        // for (auto x : v)
        //     cout << x.first << " " << x.second << endl;

        string ans = "";

        for(auto x : v){
            string temp(x.second, x.first);
            ans += temp;
        }

        return ans;



    }
};