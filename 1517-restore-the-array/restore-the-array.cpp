class Solution {
public:
    int n;
    const int MOD = 1e9 + 7;

    int solve(int i, string& s, int& k, vector<int>& t) {
        
        if(i >= n)
            return 1;

        if(s[i] == '0')
            return 0;

        if(t[i] != -1)
            return t[i];

        long long ans = 0;
        long long num = 0;

        for(int end = i; end < n; end++) {

            num = num * 10 + (s[end] - '0');

            if(num > k)
                break;

            ans = (ans + solve(end + 1, s, k, t)) % MOD;
        }

        return t[i] = ans;
    }

    int numberOfArrays(string s, int k) {
        n = s.size();

        vector<int> t(n, -1);

        return solve(0, s, k, t);
    }
};