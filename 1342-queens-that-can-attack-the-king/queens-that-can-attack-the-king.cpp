
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> ans;

        bool board[8][8] = {};

        for(auto &q : queens) {
            board[q[0]][q[1]] = true;
        }

        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for(int d = 0; d < 8; d++) {

            int x = king[0] + dx[d];
            int y = king[1] + dy[d];

            while(x >= 0 && x < 8 && y >= 0 && y < 8) {

                if(board[x][y]) {
                    ans.push_back({x, y});
                    break;
                }

                x += dx[d];
                y += dy[d];
            }
        }

        return ans;
    }
};
