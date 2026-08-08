class Solution {
public:
int t[1001];

const long long MOD = 1000000007;

    int solve(int n){
        
        if(n == 0) return 1;
        if(n == 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 5;

        if(t[n] != -1) return t[n];
        
        return t[n] =( 2LL * solve(n - 1) + solve(n - 3)) % MOD;
    }

    int numTilings(int n) {
        
        memset(t, -1, sizeof(t));

        return solve(n);
    }
};