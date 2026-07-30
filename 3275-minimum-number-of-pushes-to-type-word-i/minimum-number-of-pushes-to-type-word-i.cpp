class Solution {
public:
    int minimumPushes(string s) {
        int n = s.size();

        if(n < 9) return n;

        else if(n > 8 && n < 17){
            return 8 + (2* (n - 8));
        }
        else if (n <= 24){
            return 24 + (3* (n - 16));
        }
        else {
            return 48 + 4 * (n - 24);
        }
        return 0;
    }
};