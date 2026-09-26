class Solution {
public:
int t[101][101][201];

    bool solve(int i, int j, int k, string s1, string s2, string s3){
        int m = s1.size();
        int n = s2.size();
        int o = s3.size();

        if(i == m && j == n  && k == o ){
            return 1;
        }
        if(t[i][j][k] != -1){
            return t[i][j][k];
        }

        // take from s1
        bool take1 = false;
        if( i < m && k < o && s1[i] == s3[k] )
            take1 = solve(i + 1, j, k + 1, s1, s2, s3);

        // bool not_take1 = solve(i, j, k, s1, s2, s3);

        bool take2 = false;
        if( j < n && k < o && s2[j] == s3[k])
            take2 = solve(i, j + 1, k + 1, s1, s2, s3);

        // bool not_take2 = solve(i, j, k, s1, s2, s3);

        return t[i][j][k] = take1 || take2 ;

    }

    bool isInterleave(string s1, string s2, string s3) {
        memset(t, -1, sizeof(t));

        return solve(0, 0, 0, s1, s2, s3);
    }
};