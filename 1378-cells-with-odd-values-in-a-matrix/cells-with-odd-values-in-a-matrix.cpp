class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& arr) {
        int x = arr.size();

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        for(int i = 0; i<x; i++){
            int temp1 = arr[i][0];
            int temp2 = arr[i][1];

            row[temp1]++;
            col[temp2]++;
        }
int cnt = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if((row[i] + col[j]) % 2 == 1) cnt++;
            }
        }
        return cnt;
    }
};