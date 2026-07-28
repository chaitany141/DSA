class Solution {
public:
    int minOperations(string s) {
        int cnt = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] != ((i % 2) + '0'))
                cnt++;
        }

        return min(cnt, (int)n - cnt);
    }
};