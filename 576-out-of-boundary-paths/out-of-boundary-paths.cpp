class Solution {
public:
int m, n;
int t[51][51][51];
const int mod = 1e9 + 7;
    int solve(int i, int j, int k){

        if(i < 0 || j < 0 || i >= m || j > n - 1){
            return 1;
        }

        if(k == 0) return 0;

        if(t[i][j][k] != -1) return t[i][j][k];

        int dRow[] = {0, 0, 1, -1};
        int dCol[] = {1, -1, 0, 0};

        long long next = 0;

        for(int m = 0; m < 4; m++){
            int row = i + dRow[m];
            int col = j + dCol[m];

            next += solve(row, col, k - 1) % mod;
        }
        return t[i][j][k] = next % mod;


    }


    int findPaths(int M, int N, int maxMove, int x, int y) {
        m = M, n = N;

        memset(t, -1, sizeof(t));

        return solve(x, y, maxMove);
    }
};