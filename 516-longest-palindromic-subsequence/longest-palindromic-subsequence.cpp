class Solution {
public:
int t[1001][1001];

    int solve(string& s1, string& s2, int i, int j){
        int n = s1.size();

        if(i >= n || j >= n){
            return 0;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }

        if(s1[i] == s2[j]){
            return 1 + solve(s1, s2, i + 1, j + 1);
        }

        int include = solve(s1, s2, i + 1, j);
        int not_include = solve(s1, s2, i, j + 1);

        return t[i][j] = max(include, not_include);
    }

    int longestPalindromeSubseq(string s) {

        string s2 = s;
        
        reverse(s2.begin(), s2.end());

        memset(t, -1, sizeof(t));

        return solve(s, s2, 0, 0);
    }
};