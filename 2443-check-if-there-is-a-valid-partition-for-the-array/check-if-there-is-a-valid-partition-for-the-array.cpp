class Solution {
public:
int t[100001];

    bool solve(vector<int>& arr, int i){
        int n = arr.size();
        if(i >= n) return 1;

        if(t[i] != -1){
            return t[i];
        }

        bool result = false;

        if(i + 1 < n && arr[i] == arr[i+1]){
            result = solve(arr, i + 2);
            if(result == 1) return t[i] =  1;
        }

        if(i + 2 < n && arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]){
            result = solve(arr, i + 3);
            if(result == 1) return  t[i] = 1;
        }


        if(i + 2 < n && arr[i + 1] == 1 + arr[i] && arr[i + 2] == 2 + arr[i]){
            result = solve(arr, i + 3);
            if(result == 1) return t[i] =  1;
        }

        return t[i] = result;




    }

    bool validPartition(vector<int>& arr) {
        memset(t, -1, sizeof(t));
        
        return solve(arr, 0);

    }
};