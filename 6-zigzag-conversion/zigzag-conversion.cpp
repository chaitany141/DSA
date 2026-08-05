class Solution {
public:
    string convert(string s, int k) {
        int n = s.size();
        if(k == 1) return s;
        string ans = "";

        for(int i = 0; i<k; i++){
            int increment = 2 * (k - 1);

            for(int j = i; j <n; j+= increment){
                ans += s[j];
                if(i > 0 && i < k - 1 && j + increment - 2 * i < n){
                    ans += s[j + increment - 2 * i];
                }
            }
        }
        return ans;
    }
};