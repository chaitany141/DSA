class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        int n = arr.size();
        
        vector<int> arr2;

        for(int i = 0; i<n; i++){
            if(arr[i] % k == 0){
                arr2.push_back(arr[i]);
            }
        }
        sort(arr2.begin(), arr2.end());

        int multiple = k;
        int cnt = 1;

        for(int i = 0; i<arr2.size(); i++){
            if(i > 0 && arr2[i] == arr2[i-1])
                continue;
                
            if(arr2[i] == cnt*multiple){
                cnt++;
            }
            else{
                return multiple*cnt;
            }
        }
        return k * (cnt);
        
    }
};