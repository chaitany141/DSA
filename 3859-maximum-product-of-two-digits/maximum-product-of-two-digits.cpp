class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());

        int x = s.size();
        int a = s[x-1] - '0';
        int b = s[x-2] - '0';

        return a * b;
    }
};