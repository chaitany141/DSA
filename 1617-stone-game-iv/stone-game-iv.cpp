class Solution {
public:
int t[100001];

    bool solve(int n){

        if(n == 0) return 0;
        if(t[n] != -1){
            return t[n];
        }
        for(int k = 1; k*k <= n; k++){
            if(solve(n - k*k) == false) return t[n] = true;
        }
        return t[n] = false;
    }

    bool winnerSquareGame(int n) {
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};