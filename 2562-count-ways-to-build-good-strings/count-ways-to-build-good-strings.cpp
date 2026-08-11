class Solution {
public:
int l, h, z, o;
const int M = 1e9 + 7;
int t[100001];

    int solve(int len){
        if(len > h) return 0;

        if(t[len] != -1){
            return t[len];

        }

        int ans = 0;
        if(len >= l){
            ans = 1;
        }

        int append_one = solve(len + o);
        int append_zero = solve(len + z);

        ans = (ans + append_one + append_zero) % M;

        return t[len] = ans;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        l = low;
        h = high;
        z = zero;
        o = one;

        memset(t, -1, sizeof(t));

        return solve(0);
    }
};