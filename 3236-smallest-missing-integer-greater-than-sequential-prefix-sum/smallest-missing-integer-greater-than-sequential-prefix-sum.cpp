class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        int sum = arr[0];
        
        for(int i = 1; i<n; i++){
            if(arr[i] == 1 + arr[i-1]){
                sum += arr[i];
            }
            else break;
        }
        
        sort(arr.begin(), arr.end());

        int target = sum;

        while(true) {

            bool found = binary_search(arr.begin(), arr.end(), target);

            if(!found)
                return target;

            target++;
        }

        
    }
};