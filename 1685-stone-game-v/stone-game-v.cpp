class Solution {
public:
int t[501][501];

    int solve(int l, int r, vector<int>& prefix){
        if(l >= r) return 0;

        if(t[l][r] != -1) return t[l][r];

        int score = 0;
        for(int mid = l; mid < r ; mid++){
            int leftSum = 0;
            if(l == 0)
                leftSum = prefix[mid];
            else
                leftSum = prefix[mid] - prefix[l - 1];

            int rightSum = prefix[r] - prefix[mid];

            if(leftSum < rightSum){
                score = max(score, leftSum + solve(l, mid, prefix));
            }
            else if(leftSum > rightSum){
                score = max(score, rightSum + solve(mid + 1, r, prefix));
            }
            else {
                score = max({score, leftSum + solve(l, mid, prefix), rightSum + solve(mid + 1, r, prefix)});
            }
        }
        return t[l][r] = score;
    }

    int stoneGameV(vector<int>& arr) {
        int n = arr.size();

        memset(t, -1, sizeof(t));
        
        vector<int> prefix;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            prefix.push_back(sum);
        }

        return solve(0, n - 1, prefix);
    }
};