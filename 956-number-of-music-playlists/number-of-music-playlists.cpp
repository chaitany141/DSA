class Solution {
public:
const int MOD = 1e9+7;
int t[101][101];

    int solve(int i, int j, int n, int goal, int k){

        if(i >= goal) {
            if(j == n){
                return 1;
            }
            return 0;
        }
        if(t[i][j] != -1) return t[i][j];

        long long result = 0;

        result += (long long) (n - j) * solve(i + 1, j+1, n, goal, k);

        result +=  (long long)max(j - k, 0) * solve(i + 1, j, n, goal, k);

        return t[i][j] = result % MOD;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        memset(t, -1, sizeof(t));

        return solve(0, 0, n, goal, k);
    }
};