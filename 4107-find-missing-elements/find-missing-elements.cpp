class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> brr;
        if (arr[n - 1] - arr[0] == n - 1) return brr;

        int mini = arr[0];
        int maxi = arr[n - 1];
        
        for(int i=mini; i<maxi; i++){
            if(binary_search(arr.begin(), arr.end(), i) == false)
                brr.push_back(i);
        } 

        return brr;

        // for(int i=0; i<n - 1; i++){
        //     if(arr[i] + 1 == arr[i + 1]) continue;
        //     else {

        //     }
        // }
    }
};