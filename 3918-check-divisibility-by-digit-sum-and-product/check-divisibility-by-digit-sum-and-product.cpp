class Solution {
public:
    bool checkDivisibility(int n) {
        int a = 0, b = 1;
        int temp = n;

        while(n > 0){
            a += n % 10;
            n /= 10;
        }
        n = temp;

        while(n > 0){
            b *= n % 10;
            n /= 10; 
        }
        n = temp;

        return n % (a + b) == 0;

    }
};