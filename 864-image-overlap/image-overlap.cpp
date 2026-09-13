class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int ans = 0;

        for(int i = -(n - 1); i < n; i++) {
            for(int j = -(n - 1); j < n; j++) {

                int cnt = 0;

                for(int k = 0; k < n; k++) {
                    for(int l = 0; l < n; l++) {

                        int x = k + i;
                        int y = l + j;

                        if(x >= 0 && x < n && y >= 0 && y < n) {
                            if(img1[k][l] == 1 && img2[x][y] == 1) {
                                cnt++;
                            }
                        }
                    }
                }

                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};