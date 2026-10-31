class Solution {
public:
    int minimumFlips(int n) {
        string binary = "";

        while(n > 0) {
            binary += to_string(n % 2);
            n /= 2;
        }

        reverse(binary.begin(), binary.end());

        int x = binary.size();
        int i = 0, j = x - 1;
int cnt = 0;

        while(i < j){
            if(binary[i] != binary[j]){
                cnt += 2;

            }
            i++;
            j--;
        }
        return cnt;
    }
};