class Solution {
public:
    int reverseBits(int n) {
        string s = "";

        for(int i = 0; i < 32; i++) {
            s += (n % 2) + '0';
            n /= 2;
        }

        int ans = 0;

        int x = s.size();
        long long temp = 1;
        for(int i = x - 1; i >= 0; i--){
            
            if(s[i] == '1'){
                ans += temp;
            }
            temp *= 2;
        }
        return ans;
    }
};