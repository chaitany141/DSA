class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = n * (n + 1) / 2;

        int num1 = sum;
        int num2 = 0;
        for(int i = 1; i<n + 1; i++){
            if(i % m == 0){
                num2 += i;
                num1 -= i;
            }
        }
        
        return num1 - num2;
    }
};