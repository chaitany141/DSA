class Solution {
public:
    int reverse(int x) {
        bool neg = x < 0;

        string s = to_string(abs((long long)x)); 

        std::reverse(s.begin(), s.end());

        long long ans = stoll(s);

        if (neg) ans = -ans;

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};