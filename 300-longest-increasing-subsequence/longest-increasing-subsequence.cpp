class Solution {
public:

int t[2501][2501];

    int solve(int i, int j, vector<int>& arr){
        int n = arr.size();

        if(j >= n) return 0;

        if(t[i+1][j] != -1) return t[i+1][j];

        int take = 0;

        if(i == -1 || arr[j] > arr[i]){
            take = 1 + solve(j, j + 1, arr);
        }

        int not_take = solve(i, j + 1, arr);

        return t[i+1][j] = max(take, not_take);

    }


    int lengthOfLIS(vector<int>& arr){
        memset(t, -1, sizeof(t));

        return solve(-1, 0, arr);
    }














// int t[2501][2501];
// int n;
//     int solve(vector<int>& arr, int i, int prev){
//         if(i >= n) return 0;

//         if(t[i][prev + 1] != -1){
//             return t[i][1 + prev];
//         } 

//         int take = 0;
//         if(prev == -1 || arr[i] > arr[prev]){
//             take = 1 + solve(arr, i + 1, i);
//         } 
//         int not_take = solve(arr, i + 1, prev); 

//         return t[i][prev + 1] = max(take, not_take);
//     }

//     int lengthOfLIS(vector<int>& nums) {
//         memset(t, -1, sizeof(t));
//         n = nums.size();

//         return solve(nums, 0, -1);
//     }
};