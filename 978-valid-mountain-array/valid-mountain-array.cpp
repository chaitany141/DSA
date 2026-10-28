class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return 0;

        int i = 0;
        bool a1 = false, a2 = false;

        while(i < n - 1 && arr[i + 1] > arr[i]){
            if(arr[i] == arr[i + 1]) return false;
            i++;
            a1 = 1;
        }

        while(i < n - 1 && arr[i + 1] < arr[i]){
            if(arr[i] == arr[i + 1]) return false;
            i++;
            a2 = 1;
        }

        if(i == n - 1 && a1 && a2) return 1;
        return 0;
        
    }
};