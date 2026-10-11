class Solution {
public:
    int countPrefixes(vector<string>& arr, string s) {
        int n = arr.size();

        int ans = 0;
        for(int i = 0; i < n; i++){
            string temp = arr[i];
            bool isSame = true;
            for(int j = 0; j < temp.size(); j++){
                if(temp[j] != s[j]){
                    isSame = 0;
                    break;
                }
            }
            if(isSame) ans++;
        }
        return ans;
    }
};