class Solution {
public:

    bool find(int i, int j, int idx, vector<vector<char>>& board, string& word){
        int m = board.size();
        int n = board[0].size();

        if(idx == word.size()) return true;

        if(i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '$'){
            return false;
        }

        if(board[i][j] != word[idx]) return false;

        char temp = board[i][j];
        board[i][j] = '$';

        int dCol[] = {0, 1, 0, -1};
        int dRow[] = {1, 0, -1, 0};

        for(int k = 0; k<4; k++){
            int row = i + dRow[k];
            int col = j + dCol[k];

            if(find(row, col, idx + 1, board, word)){
                return true;
            }
        }
        board[i][j] = temp;
        return 0;


    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == word[0] && find(i, j, 0, board, word)){
                    return true;
                }
            }
        }
        return false;
    }
};